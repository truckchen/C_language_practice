#include <stdio.h>
#include <stdlib.h>

int main()
{
  int m,n;
  while(scanf("%d%d",&m,&n)!=EOF)
  {
      int a[100][100]={0};
      int b[100][100]={0};
      int i,j,t,x,y;
      for(i=0;i<m;i++)
        for(j=0;j<n;j++)
          {
            scanf("%d",&a[i][j]);
            if(a[i][j]<0)
            {
               a[i][j]=-a[i][j];
               b[i][j]=1;

            }
          }
      t=a[0][0];
      for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
           if(t<a[i][j])
                x=i+1,y=j+1,t=a[i][j];
        }
      if(b[x-1][y-1]==1)
        a[x-1][y-1]=-a[x-1][y-1];
      printf("%d %d %d\n",x,y,a[x-1][y-1]);



  }
}
