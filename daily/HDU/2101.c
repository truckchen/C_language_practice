#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int m,n;
    while(scanf("%lld%lld",&m,&n)!=EOF)
    {
        if((m+n)%86==0)
            printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
