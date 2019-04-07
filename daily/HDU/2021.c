#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t,k,i;

    while(scanf("%d",&n)!=EOF)
    {
      int wage[101]={0},b[6]={100,50,10,5,2,1},sum=0;
      if(n==0)  break;
      for(i=1;i<=n;i++)
      {
          scanf("%d",&wage[i]);
      }
      for(i=1;i<=n;i++)
      {
       for(t=0;t<6;t++)
       {
          if(wage[i]/b[t])
          {
             k=wage[i]/b[t];
             wage[i]=wage[i]-k*b[t];
             sum+=k;
          }
       }

      }
      printf("%d\n",sum);

    }
    return 0;
}
