#include <stdio.h>

void is_huiwen(char *s)
{
   int i,j,t=0;
   for(i=0;*(s+i) != '\0';i++)
   {
        t++;
   }
   j=t;
   for(i=0;i<t/2-2;i++,j--)
   {
        if(*(s+i)!=*(s+j))
        {
            printf("no\n");
            return;
        }
   }
   printf("yes\n");
}

int main()
{
    char str[100];
    gets(str);
    is_huiwen(str);
    return 0;
}
