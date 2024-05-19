#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;

    int *p;

    p = &a;
    printf("*p = %d\n", *p);

    p = &b;
    printf("*p = %d\n", *p);

    p = &c;
    printf("*p = %d\n", *p);

    return 0;
}