#include<stdio.h>
#include<string.h>
void main()
{
char s[10];
int i,len;
scanf ("%[^\n]%*c", s);
len=strlen(s);
for(i=0;i<len;i++)
{
     if (i==0)
     {

         s[i]=s[i]-32;
         printf("%c",s[i]);
     }
     else if(s[i]==' ')
     {
         s[i+1]=s[i+1]-32;
         i++;
          printf(" %c",s[i]);
     }
else
{
printf("%c",s[i]);
}
}
}
