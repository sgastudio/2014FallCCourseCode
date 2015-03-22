#include<stdio.h>
#include<string.h>

struct Student
{
    char id[10];
    char name[20];
    float score_a;
    float score_b;
    float score_c;
};

int main()
{
    int i,j,max;
    float total[5],avange[5];
    struct Student stuinfo[5];
    for(i=0;i<5;i++)
    {
        scanf("%s %s %f %f %f", stuinfo[i].id, stuinfo[i].name, &stuinfo[i].score_a, &stuinfo[i].score_b, &stuinfo[i].score_c);
    }
printf("姓名 总分 平均成绩\n");
    for(i=0;i<5;i++)
    {
        total[i] = stuinfo[i].score_a+stuinfo[i].score_b+stuinfo[i].score_c;
        avange[i] = total[i] / 3.0;
        printf("%s  %.0f   %.1f\n", stuinfo[i].name, total[i], avange[i]);
    }
    for(j=0,max=0;j<4;j++)
    {
        if(total[max]<total[j+1])
        {
            max = j+1;
        }
    }
printf("总分数最高的学生信息如下：\n");
printf("%s %s %.0f %.0f %.0f\n",stuinfo[max].id, stuinfo[max].name, stuinfo[max].score_a, stuinfo[max].score_b, stuinfo[max].score_c);
    return 0;
}
