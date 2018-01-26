#include<stdio.h>
void main()
{
    int n,rem,sq,s=0;
scanf("%d",&n);
while(n>0)
{
rem=n%10;
n=n/10;
sq=rem*rem;
s=s+sq;

}
printf("%d\n",s);



}
