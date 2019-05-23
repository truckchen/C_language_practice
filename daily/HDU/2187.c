#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,m,n,p[1001],h[1001];
    int temp,t,i,j,flag;
    double sum,price;
    scanf("%d",&c);
    while(c--)
    {
        sum=0;
        price=0;
        scanf("%d %d",&n,&m);
        for(i=0;i<m;i++)
        {
            scanf("%d %d",&p[i],&h[i]);
        }
        for(i=0;i<m-1;i++)
            for(j=0;j<m-i-1;j++)
                if(p[j]>p[j+1])
                {
                    temp=p[j];
                    p[j]=p[j+1];
                    p[j+1]=temp;
                    t=h[j];
                    h[j]=h[j+1];
                    h[j+1]=t;
                }
        flag=n;
        //for(i=0;i<m;i++)
            //printf("**%d**%d\n",p[i],h[i]);
        for(i=0;i<m;i++)
        {
            price+=1.0*p[i]*h[i];
            if(price>=(double)flag)
            {
                sum+=1.0*n/p[i];
                n=0;
            }
            else
            {
                sum+=1.0*h[i];
                n-=h[i]*p[i];
            }
            if(n==0)
                break;
        }
        printf("%.2lf\n",sum);
    }
    return 0;
}
