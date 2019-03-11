#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,k;

    while(scanf("%d",&k)!=EOF)
    {
        getchar();
        __int64 str[51]={0,1,2};
         for(i=3;i<=k;i++)
          {
           str[i]=str[i-1]+str[i-2];
          }
          printf("%I64d\n",str[k]);


    }
    return 0;
}
