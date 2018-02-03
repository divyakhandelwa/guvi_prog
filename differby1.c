#include<stdio.h>
#include<string.h>
void main()
{
char s[10],p[20];
int l1,l2,i,j,count=0,temp;
scanf("%s%s",s,p);
l1=strlen(s);
l2=strlen(p);
if(l1==l2)
{
for(i=0;i<l1;i++)
  { for(j=0;j<l2;j++)
     {
      if(s[i]==p[j])
      {
      break;
      }
      else
      {
        count++;
      }
     }
  }
  if(count==1)
  {

      printf("yes");
  }
  else
  {

      printf("no");
  }
}
else
    {

      printf("no");
  }
}
