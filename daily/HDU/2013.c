#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum;
    while(scanf("%d",&n)!=EOF)
    {
        sum=1;
        for(i=1;i<n;i++)
        {
          sum+=sum+2;
        }

        printf("%d\n",sum);

    }
    return 0;
}
