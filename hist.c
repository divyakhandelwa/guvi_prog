#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int i, len;
    int freq[26];
    int max;
    int temp;
    printf("Enter any string: ");
    gets(str);
    len = strlen(str);
       for(i=0; i<26; i++)
    {
        freq[i] = 0;
    }
    for(i=0; i<len; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            freq[str[i] - 97]++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            freq[str[i] - 65]++;
        }
    }

    printf("\nFrequency of all characters in the given string: \n");
    for(i=0; i<26; i++)
    {
        if(freq[i] != 0)
        {
            printf("'%c' = %d\n", (i + 97), freq[i]);
        }
    }
           max=0;
    for(i=0;i<26;i++)
    {

        if(freq[i]>max)
        {
           max=freq[i];

           printf("%d\n",max);

        printf("%c",i+97);
        }



    }

    return 0;
}
