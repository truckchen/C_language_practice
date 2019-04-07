#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int m,n,i,j;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        int a[50][5]={0},count,sum=0;
        float b[50]={0},c[5]={0};
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
                b[i]+=1.0*a[i][j];
                c[j]+=1.0*a[i][j];
            }
        }
        for(i=0;i<m;i++)
        {
           if(i==0)
                printf("%.2f",1.0*b[i]/n);
            else printf(" %.2f",1.0*b[i]/n);
        }
        printf("\n");
        for(j=0;j<n;j++)
            {
              if(j==n-1)
                    printf("%.2f\n",1.0*c[j]/m);
                else printf("%.2f ",1.0*c[j]/m);
            }
        for(i=0;i<m;i++)
        {
            count=0;
           for(j=0;j<n;j++)
            {
              if(a[i][j]>=c[j]/m)
                count+=1;
            }
          if(count==n)
            sum++;
        }
       printf("%d\n",sum);
}
    return 0;
}
