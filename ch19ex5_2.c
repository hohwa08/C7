//ch19ex5_2.c
//3�� �л��� 3���� ���� �Է¹޾� �迭�� �����ϱ�

#include <stdio.h>

int main()
{
    int i, j, s;
    int a[4][4] = {0};
    char *subject[3] = {"����", "����", "����"};
    char *name[4] = {"ȫ�浿", "�̿���", "��ö��", "����"};

    //�� �л��� ������ ���� �Է¹ޱ�
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%s �л� %s ����: ", name[i], subject[j]);
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
        printf("%s   ", name[i]);
        for(j = 0; j < 4; j++)
        {
            printf("%2d ", a[i][j]);

        }
        printf("\n");
    }
    //printf("\n�л� %d�� ������ %d�Դϴ�.\n", i + 1, a[i][3]);


    return 0;
}
