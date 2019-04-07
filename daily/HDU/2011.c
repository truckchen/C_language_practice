#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j;
    double sum,t;
    while(scanf("%d\n",&m)!=EOF)
    {


        for(i=0;i<m;i++)
            {
                scanf("%d",&n);
                sum=0;
                t=-1;
                for(j=1;j<=n;j++)
                    {

                        t=-t;
                        sum+=t*1.0/j;
                    }
                printf("%.2lf\n",sum);
            }
    }
    return 0;
}
