#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    char words[30][30];
    while( gets(str)!=NULL )
    {
        int flag[30]= {0};
        if(str[0]=='#')
            break;
        int start=1;
        int k=-1;
        int n=0;
        int i=0;
        while( str[i]!='\0' )
        {
            if(str[i]==' ')
            {
                start=1;
            }
            else
            {
                if(start==1)
                {
                    if(k>=0)
                        words[k][n]='\0';
                    k++;
                    start=0;
                    n=0;
                }
                words[k][n++]=str[i];
            }
            i++;
        }

        words[k][n]='\0';
        for(int i=0; i<k; i++)
        {
            for(int j=i+1; j<k+1; j++)
            {
                if(strcmp(words[i],words[j])==0)
                {
                    flag[j]=1;
                }
            }
        }
        int num=0;
        for(i=0; i<k+1; i++)
        {
            if(flag[i]==0)
            {
                num++;
            }
        }
        printf("%d\n",num);
    }
    return 0;
}

