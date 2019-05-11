#include<stdio.h>
#include<stdlib.h>

typedef enum { Linked, Thread } PointTag;
typedef struct Node {
	char data;
	struct Node* lchild;
	struct Node* rchild;
	PointTag ltag;
	PointTag rtag;
}BitNode, *BiTree;

void CreateBiTree(BiTree* T) {
	char ch = 0;
	scanf("%c", &ch);
	if (ch == ' ') {
		*T = NULL;
	} else {
		*T = (BiTree)malloc(sizeof(BitNode));
		if (!(*T)) {
			exit(-1);
		}
		(*T)->data = ch;
		CreateBiTree(&((*T)->lchild));
		CreateBiTree(&((*T)->rchild));
	}
}

BiTree pre;

void InThreading(BiTree T) {
	if (T) {
		InThreading(T->lchild);
		if (!T->lchild) {
			T->ltag = Thread;
			T->lchild = pre;
		} else {
			T->ltag = Linked;
		}
		if (!pre->rchild) {
			pre->rtag = Thread;
			pre->rchild = T;
		} else {
			pre->rtag = Linked;
		}
		pre = T;
		InThreading(T->rchild);
	}
}
void InOrderThreading(BiTree* Thrt, BiTree T) {
	if (!T) {
		return;
	}
	*Thrt = (BiTree)malloc(sizeof(BitNode));
	if (!(*Thrt)) {
		exit(-1);
	}
	(*Thrt)->ltag = Linked;
	(*Thrt)->rtag = Thread;
	(*Thrt)->lchild = T;
	(*Thrt)->rchild = *Thrt;
	pre = *Thrt;
	InThreading(T);
	pre->rtag = Thread;
	pre->rchild = *Thrt;
	(*Thrt)->rchild = pre;
}

void InOrderTraverse(BiTree Thrt) {
	BiTree p = Thrt->lchild;
    while (p != Thrt) {
		while (p->ltag == Linked) {
			p = p->lchild;
		}
		printf("%2c", p->data);
		while (p->rtag == Thread && p->rchild != Thrt) {
			p = p->rchild;
			printf("%2c", p->data);
		}
		p = p->rchild;
	}
	printf("\n");
}


int main() {
	BiTree T1, Thrt;
	CreateBiTree(&T1);
	InOrderThreading(&Thrt, T1);
	printf("**************************\n");
	InOrderTraverse(Thrt);
	if (!Thrt) {
		printf("OK\n");
	}
	system("pause");
	return 0;
}

