#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   char string[100];
   int n;
   while(scanf("%d",&n)!=EOF)
   {
       getchar();
      for(int t=1;t<=n;t++)
        {
           gets(string);
           int i,j;
           int s1,s2,s3,s4,s5;
           s1=s2=s3=s4=s5=0;
           j=strlen(string);
           for(i=0;i<j;i++)
           {
                if(string[i]=='a')
                    s1++;
                if(string[i]=='e')
                    s2++;
                if(string[i]=='i')
                    s3++;
                if(string[i]=='o')
                    s4++;
                if(string[i]=='u')
                    s5++;
           }
           printf("a:%d\n",s1);
           printf("e:%d\n",s2);
           printf("i:%d\n",s3);
           printf("o:%d\n",s4);
           printf("u:%d\n",s5);
           if(t!=n)
            printf("\n");
        }
   }

    return 0;
}
