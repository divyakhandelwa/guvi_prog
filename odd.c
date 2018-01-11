#include<stdio.h>
void main()
{  int m,n,i;
scanf("%d %d",&m,&n);
for(i=m+1;i<n;i++)
  {
     if(i%2!=0)
     printf("%d\n",i);
  }

}
