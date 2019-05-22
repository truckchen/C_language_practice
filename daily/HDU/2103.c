#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,m,n,i;
    long long int sum,flag;
    int sex[100];
    scanf("%d",&t);

        while(t--)
        {
          sum=0;
          flag=1;
          int com=0;
          scanf("%d %d",&m,&n);
          for(i=0;i<n;i++)
                scanf("%d",&sex[i]);
          for(i=0;i<n;i++)
            {
                if(com==1||i>m-1)
                {
                    sum+=(flag)*10000;
                    flag*=2;
                }
                if(sex[i]==1) com=1;
            }
          printf("%lld RMB\n",sum);
        }
    return 0;
}
