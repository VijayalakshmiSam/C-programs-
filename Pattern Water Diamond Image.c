#include<stdio.h>
#include <stdlib.h>

int main()
{
  int i,j,k=1,l,n,m;
  scanf("%d",&n);
  int a[2*n][n];
  int n1=2*n;
  for(i=0;i<n;i++)
  {
      for(j=n-1,m=0;j>=0;j--,m++)
      {
          if(m<=i)
          {
              a[i][j]=k; a[n1-1-i][j]=k;
              k++;
          }
          else
          {
              a[i][j]=-1; a[n1-1-i][j]=-1;
          }
      }
      
  }
  for(i=0;i<n1;i++)
  {
      for(j=0;j<n;j++)
      {
          if(a[i][j]!=-1) printf("%d ",a[i][j]);
          else printf("*");
      }printf("\n");
  }

}