#include <stdio.h>
#include <stdlib.h>
int t,n,i,j;
long long int sum;
long long int a[50][50]={0};

int main()
{
    //
    for(i=0;i<51;i++)
    {
       a[i][0]=1;
       for(j=0;j<i;j++)
        {
            if(i>=2)
                a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            sum+=(long long )i*a[n][i-1];
        printf("%lld\n",sum);
    }
    return 0;
}
