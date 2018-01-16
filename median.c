#include<stdio.h>
void main()
{
int m[50],i,j,num,temp;
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&m[i]);
}
for(i=0;i<num;i++)
{
    for(j=0;j<(num-i-1);j++)
{
    if(m[j]>m[j+1])
    {
       temp=m[j];
       m[j]=m[j+1];
       m[j+1]=temp;



      }

}

}

if(num%2==0)
{
   printf("%d",m[num/2]);
   }
if(num%2!=0)
{
printf("%d",m[(num/2)]);

}
}
