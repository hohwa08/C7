//ch19ex4.c
//2���� �迭 �ʱ�ȭ

#include <stdio.h>

int main()
{
    int a[2][3] = {{1,2,3},{4,5,6}};
    int b[3][4];
    int i, j, c = 0;

    //1�� 2�� �� ���
    printf("1�� 2��: %d\n", a[0][1]);

    //2�� 3�� �� ���
    printf("2�� 3��: %d\n", a[1][2]);

    //2���� 1�迭 a ��� �� ���
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j< 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    //�迭 b ��� ���Ҹ� 1�� �ʱ�ȭ

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
