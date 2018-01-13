#include<stdio.h>
void main()
{
    int m,n,p, i;
    scanf("%d  %d",&m,&n);

    while(m<n)
    {
        p=0;
    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
         p=1;
         break;
        }
    }
        if (p == 0)
            printf("%d ", m);

        ++m;
    }

    }
