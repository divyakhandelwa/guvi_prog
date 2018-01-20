#include<stdio.h>
void main()
{char stl[40];
int i,len;
scanf("%s",&stl);
len=strlen(stl);
for(i=0;i<=len-1;i++)
{
printf("%c",stl[i]);
}
printf(".");

}
