#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,t,k;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
      if(m==0&&n==0)
        break;
      int a[101]={m};
      for(i=1;i<=n;i++)
      {
        scanf("%d",&a[i]);
      }
      for(i=0;i<n;i++)
      {
        if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;

            }


      }
      for(k=0;k<=n;k++)
      {
          if(k>=1) printf(" %d",a[k]);
          else printf("%d",a[k]);
      }
      printf("\n");

    }
    return 0;
}
/*  t=a[0];
          if(i==n&&a[i]<a[0])
             {
               for(j=0;j<i;j++)
              {
                 a[j]=a[j+1];
              }
                  a[j]=t;

             }
          if(a[0]>a[i]&&a[0]<a[i+1]&&i<n&&i>0)
            {

              for(j=0;j<i;j++)
              {
                a[j]=a[j+1];
              }
              a[j]=t;
              break;
            }*/
