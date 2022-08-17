//ch19ex5_2.c
//3명 학생의 3과목 점수 입력받아 배열에 저장하기

#include <stdio.h>

int main()
{
    int i, j, s;
    int a[4][4] = {0};

    //각 학생별 국영수 점수 입력받기
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d번 학생 과목 %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    //학생 총점 구하기

    for(i = 0; i < 3; i ++)
    {
        for(j = 0; j < 4; j ++)
        {
             a[i][3] += a[i][j];
        }
    }

    //과목별 총점 구하기
    for(i = 0; i < 3; i ++)
    {
        for(j = 0; j < 4; j ++)
        {
             a[3][j] += a[i][j];
        }
    }

    //학생 성적표 출력
    printf("성 적 표\n");
    for(i = 0; i < 4; i++)
    {
        printf("학생 %d   ", i + 1);
        for(j = 0; j < 4; j++)
        {
            printf("%3d ", a[i][j]);

        }
        printf("\n");
    }
    //printf("\n학생 %d의 총점은 %d입니다.\n", i + 1, a[i][3]);


    return 0;
}
