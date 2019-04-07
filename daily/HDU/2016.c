#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,s,j;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0||n>100)
            break;
        int a[100]={0},min,t;
        for(m=0;m<n;m++)
            scanf("%d",&a[m]);
        min=a[0];
        for(i=0;i<n-1;i++)
            {
              if(min>a[i+1])
                   {
                       min=a[i+1];
                       s=i+1;
                    }
            }
        if(min!=a[0])
            {
              t=a[0];
              a[0]=a[s];
              a[s]=t;
            }
         for(j=0;j<n;j++)
               {
                 if(j>=1)
                    printf(" %d",a[j]);
                 else
                      printf("%d",a[j]);
               }
            printf("\n");

    }

    return 0;
}
