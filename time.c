#include<stdio.h>
void main()
{
  int m,h=0;
  scanf("%d",&m);
  h=m/60;
  m=m%60;

 printf("%d %d",h,m);
}
