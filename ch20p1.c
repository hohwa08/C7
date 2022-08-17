//ch20p1.c
//포인터 변수

#include <stdio.h>

int main()
{
    int age;
    int *pAge; //int*pAgr;

    age = 19;
    pAge = &age;

    printf("age: %d, age addr: %p\n", age, &age);
    printf("pAge: %d, pAge addr: %p\n", *pAge, pAge);

    age = 25;
    printf("age: %d, *pAge: %d\n", age, *pAge);

    *pAge += 5;
    printf("age: %d, *pAge: %d\n", age, *pAge);

    return 0;
}
