//ch21p2.c
//���� ����


#include <stdio.h>

int main()
{
    int i;

    char *subject[] = {"English", "Math", "Science", "History"};

    for(i = 0; i < 4; i ++)
    {
        printf("subject: %s\n", subject[i]);
    }

    return 0;
}
