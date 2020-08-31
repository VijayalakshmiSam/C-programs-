#include<stdio.h>
#include <stdlib.h>

int main()
{
  int n,i,j;
  scanf("%d",&n);
  int a[n],b[n],area[n],temp[n],min=99999;
  for(i=0;i<n;i++)
  {
      scanf("%d %d",&a[i],&b[i]);
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          if(a[i]<a[j])
          {
              int t=a[i]; a[i]=a[j]; a[j]=t;
              t=b[i]; b[i]=b[j]; b[j]=t;
          }
      }
  }
  for(i=0;i<n;i++)
  {
      area[i]=a[i]*b[i];
      if(min>area[i]) min=area[i];
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          if(area[j]==min)
          {
              printf("%d %d %d\n",a[j],b[j],area[j]);
              area[j]=99999;
              break;
          }
      }
      min=99999;
      for(j=0;j<n;j++)
      {
          if(min>area[j]) min=area[j];
      }
  }

}