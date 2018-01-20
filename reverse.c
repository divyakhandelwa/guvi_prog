#include<stdio.h>
#include<string.h>
void main()
{ char str[50];
int l,i;
scanf("%s",&str);
l=strlen(str);
for(i=l-1;i>=0;i--)
{
    printf("%c",str[i]);
}
}
