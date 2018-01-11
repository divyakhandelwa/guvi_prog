#include<stdio.h>
void main()
{
  int n,i,p,s=1;
  scanf("%d",&n);
  scanf("%d",&p);
  for(i=0;i<p;i++)
  {  s=s*n;
  }
  printf("%d",s);
  }
