#include<stdio.h>
#include<string.h>
void main()
{ char ch[100];
int len,i,temp;
scanf("%s",&ch);
len =strlen(ch);
for(i=0;i<len;i=i+2)
{
   temp=ch[i+1];
   ch[i+1]=ch[i];
   ch[i]=temp;
}

printf("%s",ch);

}
