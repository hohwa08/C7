//ch20lab1.c

#include <stdio.h>

int main()
{
    int *px, *py;
    int num = 30;

    px = &num;
    py = &num;

    *py += 5;

    printf("*px: %d, *py: %d, num = %d\n", *px, *py, num);
    printf("px: %p, py: %p, num addr = %p\n", px, py, &num);


    return 0;

}
