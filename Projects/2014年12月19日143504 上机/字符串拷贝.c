#include <stdio.h>

 int strcpy(char *str1, char *str2)
{
    int i;
    for(i=0; *(str1+i)!='\0'; i++)
    {
        *(str2+i)=*(str1+i);
    }

    return 0;
}
int main()
{
    char text[100], a[100]={0};
    gets(text);
    strcpy(text,a);
    puts(a);
    return 0;
}


