#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i;
    int sum;
    while(scanf("%d%d",&a,&b)!=EOF)//£¨0<a<10000, 10<b<100£©
    {


            sum=0;
            int sign=1;
            if(a==0&&b==0)
                      break;
            for(i=0;i<100;i++)

                   {
                         sum=a*100+i;
                         if(sum%b==0)
                             {
				if(sign==0)
					printf(" ");
				if(i<10)
				{
					printf("0");
					printf("%d",i);
				}
				else
					printf("%d",i);
				sign = 0;
			}
		}
		printf("\n");
    }

}
