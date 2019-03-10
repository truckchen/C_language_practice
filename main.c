#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int ss(int q)
{
    int i;
    int t;
    for(i=2;i<q;i++)
		if(q%i==0) {t=0;break;}
	     if(i==q) t=1;
     return t;
}

int i,j,n,sum,all;
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        if(n==0)
            break;
        for(i=3;i<n/2;i++)
        {
          if(ss(i)==1&&ss(n-i)==1)
               sum+=1;
        }
        printf("%d\n",sum);
    }
    return 0;
}
