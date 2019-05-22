#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,i,n,t;
    int a[111]={0};
    for(i=1;i<=101;i++)
        a[i]=a[i-1]+i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&n);
        printf("%d\n",a[m]*a[n]);
    }
    return 0;
}
