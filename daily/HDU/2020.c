#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,k,t,h,l;
    while(scanf("%d",&n)!=EOF)
    {
      if(n==0)
        break;
      int a[100]={0};
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
      for(j=0;j<n;j++)
        {
          for(i=0;i<n-j;i++)
          {
                t=0;
                l=0;
                h=0;
                if(a[i]<0)
                {
                    t=1;
                    a[i]=-a[i];
                }
                 if(a[i+1]<0)
                {
                    l=1;
                    a[i+1]=-a[i+1];
                }
                if(a[i]<a[i+1])
                {
                    h=1;
                    m=a[i+1];
                    a[i+1]=a[i];
                    a[i]=m;
                }
                if(t!=0&&h==0)
                    a[i]=-a[i];
                if(l!=0&&h==0)
                    a[i+1]=-a[i+1];
                if(l!=0&&h!=0)
                    a[i]=-a[i];
                if(t!=0&&h!=0)
                    a[i+1]=-a[i+1];
            }
         }
        for(k=0;k<n;k++)
        {
           if(k>0)
                printf(" %d",a[k]);
           else printf("%d",a[k]);
        }
   printf("\n");

  }
  return 0;
}
