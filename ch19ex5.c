//ch19ex5.c
//3�� �л��� 3���� ���� �Է¹޾� �迭�� �����ϱ�

#include <stdio.h>

int main()
{
    int i, j, s;
    int a[4][4] = {0};

    //�� �л��� ������ ���� �Է¹ޱ�
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d�� �л� ���� %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    //�л� ���� ���ϱ�

    for(i = 0; i < 3; i ++)
    {
        for(j = 0; j < 4; j ++)
        {
             a[i][3] += a[i][j];
        }
    }

    //���� ���� ���ϱ�
    for(i = 0; i < 3; i ++)
    {
        for(j = 0; j < 4; j ++)
        {
             a[3][j] += a[i][j];
        }
    }

    //�л� ����ǥ ���
    printf("�� �� ǥ\n");
    for(i = 0; i < 4; i++)
    {
        printf("�л� %d   ", i + 1);
        for(j = 0; j < 4; j++)
        {
            printf("%3d ", a[i][j]);

        }
        printf("\n");
    }
    //printf("\n�л� %d�� ������ %d�Դϴ�.\n", i + 1, a[i][3]);


    return 0;
}