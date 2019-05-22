#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,a[31]={0,1,3};
    int i;
    for(i=3;i<31;i++)
        a[i]=a[i-1]+a[i-2]*2;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        printf("%d",a[m]);
    }
    return 0;
}
