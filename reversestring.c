#include<stdio.h>
#include<string.h>
void main()
{
 char s[40];
 int i,len;
scanf("%s",&s);
len=strlen(s);
for(i=len-1;i>=0;i--)
{
    if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u')
    {
        continue;
    }
    else
    {

 printf("%c",s[i]);
}
}
}
