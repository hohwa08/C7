//ch19ex4.c
//2차원 배열 초기화

#include <stdio.h>

int main()
{
    int a[2][3] = {{1,2,3},{4,5,6}};
    int b[3][4];
    int i, j, c = 0;

    //1행 2열 값 출력
    printf("1행 2열: %d\n", a[0][1]);

    //2행 3열 값 출력
    printf("2행 3열: %d\n", a[1][2]);

    //2차원 1배열 a 모든 값 출력
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j< 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    //배열 b 모든 원소를 1로 초기화

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            b[i][j] = 1;
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }


    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            c += 1;
            b[i][j]  = c;
            printf("%02d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
