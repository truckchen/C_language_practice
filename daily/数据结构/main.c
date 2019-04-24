#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct student)

struct student
{
    long score;
    struct student *next;
};

struct student *creat()
{
  struct student *p1,*p2,*head;
  int n=0;
  printf("please scanf date:\n");
  head=(struct student *)malloc(LEN);
  p1=p2=(struct student *)malloc(LEN);
  scanf("%ld",&p1->score);
  while(p1->score!=0)
  {
      n++;
      if(n==1)   head->next=p1;
      else      p2->next=p1;
      p2=p1;
      p1=(struct student *)malloc(LEN);
      scanf("%ld",&p1->score);
  }
  p2->next=NULL;
  return head;
}

void printflist(struct student *head)
{
    struct student *p1;
    printf("******printflist********\n");
    if(head->next==NULL) printf("this list is null!\n");
    else
    {
        p1=head->next;
        do
        {
          printf("%ld ",p1->score);
          p1=p1->next;
        }while(p1!=NULL);
    }
    printf("\n");
}

int main()
{
    struct student *pa,*pb,*pt,*flag,*pp;
    pa=creat();
    pb=creat();
    printflist(pa);
    printflist(pb);
    flag=pa;
    pa=pa->next; //指向首元节点
    pb=pb->next;
    if(pa->score<=pb->score)//比较首元节点的大小
        {
            flag->next=pa;
            pp=pt=pa;
            pa=pa->next;
            pp->next=NULL;
        }
    else
        {
            flag->next=pb;
            pp=pt=pb;
            pb=pb->next;
            pp->next=NULL;
        }
    while(pa&&pb)
    {
        if(pa->score<=pb->score)
        {
            flag->next=pa;
            pp=pa;
            pa=pa->next;
            pp->next=pt;
            pt=pp;
        }
        else
        {
            flag->next=pb;
            pp=pb;
            pb=pb->next;
            pp->next=pt;
            pt=pp;
        }
    }
    while(pa!=NULL)
        {
            flag->next=pa;
            pp=pa;
            pa=pa->next;
            pp->next=pt;
            pt=pp;
        }
    while(pb!=NULL)
       {
            flag->next=pb;
            pp=pb;
            pb=pb->next;
            pp->next=pt;
            pt=pp;
       }
    printflist(flag);
    return 0;
    }
