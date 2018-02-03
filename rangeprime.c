#include<stdio.h>
void main()
{
    int l,m,prime,i,j;
scanf("%d%d",&l,&m);
    for(i=l+1; i<m; i++)
    {     prime=1;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                prime = 0;
                break;
            }
        }
        if(prime==1)
        {
        printf("%i",i);}
        }
}
