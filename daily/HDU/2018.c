#include<stdio.h>
#include<stdlib.h>


int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        int a[55]={0};
        if(n<=0||n>=55)
            break;
        for(i=1;i<55;i++)
        {
            if(i<=4)
              a[i]=i;
            if(i>4)
                a[i]=a[i-1]+a[i-3];
        }
        printf("%d\n",a[n]);
    }
}
