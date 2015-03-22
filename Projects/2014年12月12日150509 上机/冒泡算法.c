#include <stdio.h>

void bubblesort(int *data, int num)
{
    int *t, temp, i, j;
    for(i=0; i<num; i++)
    {
        for(j=0; j<num-i; j++)
        {
            t = data+j;
            if(*(t)>*(t+1))
            {
                temp = *t;
                *t = *(t+1);
                *(t+1) = temp;
            }
        }
    }
}

int main()
{
    int numa[5], i;
    for(i=0; i<=4; i++)
    {
        scanf("%d", &numa[i]);
    }
    bubblesort(numa, 5);
    for(i=0; i<=4; i++)
    {
        printf("%d ", numa[i]);
    }
    putchar('\n');
    return 0;
}
