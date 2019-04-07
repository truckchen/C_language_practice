#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    while(scanf("%d\n",&n)!=EOF)
    {

        int sum;
        char c;
        for(i=1;i<=n;i++)
        {
          sum=0;
          while((c=getchar())!='\n')
          {

              if(c>='0'&&c<='9')
                sum+=1;
          }
        printf("%d\n",sum);
        }
      printf("\n");
    }
    return 0;
}
