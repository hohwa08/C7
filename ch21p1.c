//ch21p1.c
//배열과 포인터


#include <stdio.h>

int main()
{
    int  n[5] = {10, 20, 30, 40, 50};
    int *pNum;
    int i;


    pNum = n; //n은 &n[0] 배열 첫 원소의 주소 값

    printf("n[0]: %d, *(n + 0): %d\n", n[0], *(n + 0));
    printf("n[1]: %d, *(n + 1): %d\n", n[1], *(n + 1));
    printf("n[2]: %d, *(n + 2): %d\n", n[2], *(n + 2));

    //pNum 출력하기
    printf("n[0]: %d, *(pNum + 0): %d\n", n[0], *(pNum + 0));
    printf("n[1]: %d, *(pNum + 1): %d\n", n[1], *(pNum + 1));
    printf("n[2]: %d, *(pNum + 2): %d\n", n[2], *(pNum + 2));

    for(i = 0; i < 5; i++)
    {
        printf("n[%d]: %d, *(pNum + %d): %d\n", i, n[i], i, *(pNum + i));
    }

    return 0;
}
