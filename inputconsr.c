#include <stdio.h>
int main()
{
long int m,i,j,temp;
printf("enter the number");
scanf("%1d",&m);
long int a[m];
for(i=0;i<m;i++)
{
scanf("%ld",&a[i]);
}
for(i=0;i<m;i++)
{
for(j=i+1;j<m;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<m;i++)
printf("%ld",a[i]);
return 0;
}
