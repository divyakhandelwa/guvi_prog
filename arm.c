#include<stdio.h>
#include<math.h>
void main()
{
  int n,temp,s=0,r;
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {  r=n%10;
     s=s+pow(r,3);
     n=n/10;

  }
     if(s==temp)
     {
     printf("yes");
     }
     else{
     printf("no");
     }
     }
