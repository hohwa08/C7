//ch21ex2.c
//영화 평점 입력 받기

#include <stdio.h>

int main()
{
    int i;
    int max, max_idx;
    int min, min_idx;
    char ans;
    int movie_rating[5];
    char *movies[5] = {"Mission Impossible", "Toy Story", "Avengers", "Big Hero", "Frozen"};

    //영화제목 출력하기
    for(i = 0; i < 5; i++)
    {
        printf("영화 %s 보셨나요?(Y)", movies[i]);
        scanf(" %c", &ans);

        if(ans == 'Y'||ans == 'y')
        {
            printf("평점을 입력해주세요(1~10): ");
            scanf("%d", &movie_rating[i]);
        }
        else
        {
            movie_rating[i] = 0;
        }

    }

    printf("\n---------------------------------\n");

    //출력 (영화: OOO, 평점: 00점)
    for(i = 0; i < 5; i++)
    {
        if (movie_rating[i] > 0)
        {
            printf("영화: %s, 평점: %d점\n", movies[i], movie_rating[i]);
        }
    }
    printf("\n--------------------------------\n");
    //최고 평점 영화 출력(최고 평점 영화는 %s로 %d점입니다.)

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

    printf("최고 평점 영화는 %s로 %d점입니다.\n", movies[max_idx], max);
    printf("최저 평점 영화는 %s로 %d점입니다.\n", movies[min_idx], min);
    return 0;
}
