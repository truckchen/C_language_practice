#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n,i,j,t;
    float sum;
    while(scanf("%d",&n)!=EOF)
        {
          sum=0;
          int s[100];
          for(i=0;i<n;i++)
              {
                scanf("%d",&s[i]);
                sum+=s[i];
              }
         for(j=0;j<n-1;j++)
           {
             for(i=0;i<n-j-1;i++)
               {
                       if(s[i]<s[i+1])
                           {
                             t=s[i];
                             s[i]=s[i+1];
                             s[i+1]=t;
                           }

               }

           }
         sum=(sum-s[n-1]-s[0])/(n-2.0);
         printf("%.2f\n",sum);
        }
    return 0;
}
