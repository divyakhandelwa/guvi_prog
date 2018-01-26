#include<stdio.h>
#include<string.h>
void main()
{
char s[50];
int i,len;
scanf("%s",&s);
len=strlen(s);
for(i=0;i<len;i++)
{
s[i]=s[i]+3;
printf("%c",s[i]);
}
}
