/**
 * Programmer: Muhammed Owais 
 * Desc: Division of two numbers without the division operator
 * Date: 10/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>
#include <string.h>

int main()
{
    int i, count = 0;
    char *p;
    char sentence[80];
    gets(sentence);
    int len = strlen(sentence);
    for (int i = 0; i < len; i++)
    {
        p = strchr(sentence, 'i');
        printf("%c\n", *p);
        if (p != NULL)
        {
            count++;
        }
        
    }
    printf("%d", count);
    

}