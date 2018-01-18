#include<stdio.h>
#include<math.h>
void main()
{
  int m1,h1,m2,h2,h3,m3;
  scanf("%d%d%",&h1,&m1);
  scanf("%d %d",&h2,&m2);
  h3= h1-h2;
  m3= m1-m2;
  printf("%d\t",abs(h3));
  printf("%d",abs(m3));
}
