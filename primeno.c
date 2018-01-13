#include<stdio.h>
void main()
{
    int n, i, p = 0;
    scanf("%d",&n);

    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            p=1;
            break;
        }
    }

    if (p==0)
        printf("yes");
    else
        printf("no");

    }
