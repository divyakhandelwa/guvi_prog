#include<stdio.h>
void main()
{
  int n,k,a[50],s=0;
  scanf("%d",&n);
  scanf("%d",&k);
  for(i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
     }
     for(i=0;i<k;i++)
     {
        s=s+a[i];
        }
printf("%d",s);
}
