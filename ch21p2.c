//ch21p2.c
//문자 포인


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
