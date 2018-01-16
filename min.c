#include<stdio.h>
void main()
{
int m[50],i,min,j,num;
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&m[i]);
}
min=m[0];
for(j=1;j<num;j++)
{
    if(m[j]<min)
    {
    min=m[j];

      }
}
    printf("%d",min);

}

