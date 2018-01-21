#include <stdio.h>
#include<string.h>
int main(void) {
	char a[100];
	int i,c=0,d,count=0;
	printf("enter the string:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
    {
    c++;

    }
    	for(i=0;i<=c;i++)
	{
	if(a[i]==' ')
	{
		count++;
	}
	}
    d=c-count;
	printf("\n%d",d);
	return (0);
}
