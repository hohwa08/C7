//ch21ex2.c
//��ȭ ���� �Է� �ޱ�

#include <stdio.h>

int main()
{
    int i;
    int max, max_idx;
    int min, min_idx;
    char ans;
    int movie_rating[5];
    char *movies[5] = {"Mission Impossible", "Toy Story", "Avengers", "Big Hero", "Frozen"};

    //��ȭ���� ����ϱ�
    for(i = 0; i < 5; i++)
    {
        printf("��ȭ %s ���̳���?(Y)", movies[i]);
        scanf(" %c", &ans);

        if(ans == 'Y'||ans == 'y')
        {
            printf("������ �Է����ּ���(1~10): ");
            scanf("%d", &movie_rating[i]);
        }
        else
        {
            movie_rating[i] = 0;
        }

    }

    printf("\n---------------------------------\n");

    //��� (��ȭ: OOO, ����: 00��)
    for(i = 0; i < 5; i++)
    {
        if (movie_rating[i] > 0)
        {
            printf("��ȭ: %s, ����: %d��\n", movies[i], movie_rating[i]);
        }
    }
    printf("\n--------------------------------\n");
    //�ְ� ���� ��ȭ ���(�ְ� ���� ��ȭ�� %s�� %d���Դϴ�.)

    max = 0;
    min = 100;

    for(i = 0; i > 5; i++)
    {
        if(movie_rating[i] > 0)
        {
            if(movie_rating[i] > max)
            {
                max = movie_rating[i];
                max_idx = i;
            }
            if(movie_rating[i] < min)
            {
                min = movie_rating[i];
                min_idx = i;
            }

        }
    }

    printf("�ְ� ���� ��ȭ�� %s�� %d���Դϴ�.\n", movies[max_idx], max);
    printf("���� ���� ��ȭ�� %s�� %d���Դϴ�.\n", movies[min_idx], min);
    return 0;
}
