#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct student)
//反向输出不带头结点

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
  head=NULL;
  p1=p2=(struct student *)malloc(LEN);
  scanf("%ld",&p1->score);
  while(p1->score!=0)
  {
      n++;
      if(n==1)   head=p1;
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
    struct student *pa,*pb,*pt,*flag;
    pa=creat();
    pb=creat();
    printflist(pa);
    printflist(pb);
    flag=pt=pa;
    pa=pa->next;
    pb=pb->next;
    while(pa&&pb)
    {
        if(pa->score<=pb->score)
        {
            pt->next=pa;
            pt=pa;
            pa=pa->next;
        }
        else
        {
            pt->next=pb;
            pt=pb;
            pb=pb->next;
        }
    }
    if(pa!=NULL)
    {
         pt->next=pa;
    }
    else
       {
           pt->next=pb;
       }

    printflist(flag);
    return 0;
}
