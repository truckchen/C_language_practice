#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j,t,sum;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
            int a[100]={0};
            j=0;
            t=0;
            for(i=1;i<=n;i++,j++)
                {

                    if(t==1)
                        printf(" ");
                    t=0;
                    a[i+1]=a[i]+2*i;
                    if(i%m==0)
                        {

                            sum=(a[i+1]-a[i+1-m])/m;
                            printf("%d",sum);
                            t=1;
                            j=0;
                        }
                    if((n-j)%m==0&&i==n&&j!=0)
                        {
                            sum=(a[i+1]-a[i+1-j])/j;
                            printf("%d",sum);
                            t=1;
                        }
                }
           printf("\n");
    }
    return 0;
}
