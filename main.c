#include <stdio.h>
#include <stdlib.h>

int main()
{
     int m,n,i,j,t,k;

    while(scanf("%d",&k)!=EOF)
    {
        getchar();
        __int64 str[50]={0,1,1};

        for(j=1;j<=k;j++)
        {
          scanf("%d %d",&m,&n);
          t=n-m+1;
          for(i=3;i<=t;i++)
          {
           str[i]=str[i-1]+str[i-2];
          }
          printf("%I64d\n",str[t]);
        }

    }
    return 0;
}
