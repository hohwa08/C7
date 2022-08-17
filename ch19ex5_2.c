//ch19ex5_2.c
//3명 학생의 3과목 점수 입력받아 배열에 저장하기

#include <stdio.h>

int main()
{
    int i, j, s;
    int a[4][4] = {0};
    char *subject[3] = {"국어", "영어", "수학"};
    char *name[4] = {"홍길동", "이영희", "김철수", "총점"};

    //각 학생별 국영수 점수 입력받기
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%s 학생 %s 점수: ", name[i], subject[j]);
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
        printf("%s   ", name[i]);
        for(j = 0; j < 4; j++)
        {
            printf("%2d ", a[i][j]);

        }
        printf("\n");
    }
    //printf("\n학생 %d의 총점은 %d입니다.\n", i + 1, a[i][3]);


    return 0;
}
