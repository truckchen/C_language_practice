#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    int i,j;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        for(i=1;i<=3*m;i++)
        {
            for(j=1;j<=m;j++)
                printf("HDU");
            printf("\n");
        }
    }
    return 0;
}
