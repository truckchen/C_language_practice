#include<stdio.h>
int main()
{
  double vul,d;
  int times,n,i,tt,t;
  while( scanf("%lf%lf",&vul,&d)==2 )
  {
      times=vul/d;
      if(vul - times*d > 0.000001 )
         times = times +1;
      i=1;
      tt=0;
      while(vul>0.000001){
         vul = vul - d*i;
         if(vul>0.000001)
            tt++;
         i++;
      }
      printf("%d\n",  times = times +tt);
  }

  return 0;
}
