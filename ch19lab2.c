//ch19lab2.c

#include <stdio.h>

int main()
{
    int i, j, c = 0;
    int a[3][4] = {0};

    for(i = 0; i < 3; i ++)
    {
        for(j = 0; j < 4; j++)
        {
            c += 2;
            a[i][j]  = c;
            printf("%0112d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
