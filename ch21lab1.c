//ch21lab1.c


#include <stdio.h>

int main()
{
    int n[5] = {10, 20, 30, 40, 50};
    int *pN;
    int i;

    pN = n; // pN = &n[0]

    for(i = 0; i < 5; i++)
    {
        //처리
        *(pN +i) += 1;

        //출력
        printf("%d ", n[i]);
    }
    return 0;
}
