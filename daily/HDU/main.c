#include <stdio.h>
#include <stdlib.h>

struct student
{
    int  num;
    char name[20];
    float math;
    float physics;
}stu[10],t;

int main()
{
    int i,j;
    float aver1=0,aver2=0;
    printf("请输入学生信息\n");
    printf("学号  姓名  数学  物理\n");
    for(i=0;i<10;i++)
    {
        scanf("%d %s %f %f",&stu[i].num,stu[i].name,&stu[i].math,&stu[i].physics);
        aver1=aver1+stu[i].math;
        aver2=aver2+stu[i].physics;
    }
     aver1=1.0*aver1/(i+1);
     aver2=1.0*aver2/(i+1);
    for(i=0;i<9;i++)
        for(j=0;j<9-i;j++)
              if(stu[j].math<stu[j+1].math)
              {
                t=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=t;
              }
    printf("科目：数学\n");
    printf("序号  学号  姓名  数学\n");
    for(i=0;i<10;i++)
      printf("%-5d %-5d %-5s %-5.2f\n",i+1,stu[i].num,stu[i].name,stu[i].math);
    printf("平均成绩是：       %f\n",aver1);


    for(i=0;i<9;i++)
        for(j=0;j<9-i;j++)
              if(stu[j].physics<stu[j+1].physics)
              {
                t=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=t;
              }
    printf("科目：物理\n");
    printf("序号  学号  姓名  数学\n");
    for(i=0;i<10;i++)
      printf("%-5d %-5d %-5s %-5.2f\n",i+1,stu[i].num,stu[i].name,stu[i].physics);
    printf("平均成绩是：       %f\n",aver2);
    return 0;
}
