#include<stdio.h>
#include<string.h>

struct Complex
{
    float re;
    float im;
};

int main()
{
    int i;
    struct Complex num[2];
    for(i=0;i<2;i++)
    {
        scanf("%f %f", &num[i].re, &num[i].im);
    }
    printf("%.2f%+.2fi\n", num[0].re + num[1].re, num[0].im + num[1].im);
    printf("%.2f%+.2fi\n", num[0].re*num[1].re - num[0].im * num[1].im, num[0].im*num[1].re + num[0].re*num[1].im);
    return 0;
}
