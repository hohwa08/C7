//ch21ex1.c
//���� ������ �迭

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
        printf("%d. �л��̸�: ", i + 1);
        gets(names[i]);
    }

    for(i = 0; i < 3; i++)
    {
        puts(names[i]);
    }

    return 0;
}
