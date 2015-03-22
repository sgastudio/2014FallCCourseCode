#include <stdio.h>

void strcompare(char *str1, char *str2)
{
      int i;
      char temp[100]={0};
      if(*str1 > *str2)
      {
            for(i=0; *(str1)!='\0'; i++)
            {
                temp[i]=*(str1+i);
                *(str1+i)=*(str2+i);
                *(str2+i)=temp[i];
            }
      }

}

int main()
{
    char a[100]={0},b[100]={0},c[100]={0};
    gets(a);
    gets(b);
    gets(c);
    strcompare(a, b);
    strcompare(a, c);
    strcompare(b, c);
    printf("%c %c %c", a, b, c);
    return 0;
}


