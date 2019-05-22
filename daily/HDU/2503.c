#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,a,b,c,d,temp,m;
    long int sum1,sum2,sum3;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        sum1=a*d+b*c;
        sum2=b*d;
        m=sum1;
        sum3=sum2;
        if(sum3<m)
            {
                temp=sum3;sum3=m;m=temp;
            }
        temp=sum3%m;
        while(temp!=0)
        {
            sum3=m;
            m=temp;
            temp=sum3%m;
        }
        printf("%ld %ld\n",sum1/m,sum2/m);
    }
    return 0;
}
