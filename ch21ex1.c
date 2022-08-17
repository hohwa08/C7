//ch21ex1.c
//문자 포인터 배열

#include <stdio.h>

int main()
{
    int i;

    char name1[10];
    char name2[10];
    char name3[10];

    char *names[3] = {name1, name2, name3};

    for(i = 0; i < 3; i++)
    {
        printf("%d. 학생이름: ", i + 1);
        gets(names[i]);
    }

    for(i = 0; i < 3; i++)
    {
        puts(names[i]);
    }

    return 0;
}
