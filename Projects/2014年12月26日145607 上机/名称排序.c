#include<stdio.h>
#include<string.h>

struct Student
{
    char name[20];
    float score_a;
    float score_b;
    float score_c;
};

void namesort(struct Student *input,int n)
{
    struct Student t;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if((*(input+j)).name[1] > (*(input+j+1)).name[1])
            {
                t = *(input+j);
                *(input+j) = *(input+j+1);
                *(input+j+1) = t;
            }
        }
    }
    
}

int main()
{
    int i,j,max;
    float total[4],avange[4];
    struct Student stuinfo[4];
    for(i=0;i<4;i++)
    {
        scanf("%s %f %f %f", stuinfo[i].name, &stuinfo[i].score_a, &stuinfo[i].score_b, &stuinfo[i].score_c);
    }
    namesort(stuinfo,4);
    for(i=0;i<4;i++)
    {
        total[i] = stuinfo[i].score_a+stuinfo[i].score_b+stuinfo[i].score_c;
        avange[i] = total[i] / 3.0;
        printf("%s  %.1f %.1f %.1f %.1f\n", stuinfo[i].name, stuinfo[i].score_a, stuinfo[i].score_b, stuinfo[i].score_c, avange[i]);
    }
    return 0;
}
