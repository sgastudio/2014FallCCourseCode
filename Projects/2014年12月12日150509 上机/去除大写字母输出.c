#include <stdio.h>

void textfa(char *stra)
{
    int i;
    for(i=0;*(stra+i)!='\0';i++)
    {

        if( *(stra+i) <= 'A' || *(stra+i) >= 'Z')
        {
            putchar(*(stra+i));
        }

    }
}

int main()
{
    char str1[100];
    gets(str1);
    textfa(str1);
    putchar('\n');
    return 0;
}

