#include<stdio.h>
void main()
{
int m[50],i,max,j,num;
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&m[i]);
}
max=m[0];
for(j=1;j<num;j++)
{
    if(m[j]>max)
    {
    max=m[j];

      }
}
    printf("%d",max);

}

