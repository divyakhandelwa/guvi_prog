#include<stdio.h>
void main()
{
    int p,q,r;
    printf("enter first number ,second number and third number");
    scanf("%d\n%d\n%d",&p,&q,&r);
    if(p>q && q>r)
    {   printf("%d",p);
    }
    else if(p<q)
      { if(q>r)
      {  printf("%d",q);
      }
      else
        { printf("%d",r);
        }
      }
      else
       { printf("%d",r);
       }
       }
