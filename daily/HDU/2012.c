#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,t,i,n,sum;
    while(scanf("%d%d",&x,&y)!=EOF)// -39<=x<y<=50
    {

        if(x==0&&y==0)
            break;

        for(t=x;t<=y;t++)
            {
                n=t*t+t+41;
                sum=1;

              for(i=2;i<n/2;i++)
                  if(n%i==0)
                  {
                      sum=0;  break;
                   }

        if(sum==0)
            {
                printf("Sorry\n");
                 break;
            }
        }
      if(sum) printf("OK\n");
    }
    return 0;
}
