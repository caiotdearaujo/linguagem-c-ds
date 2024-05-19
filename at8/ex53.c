#include <stdio.h>

int main()
{
    int a = 10;
    int *p1, *p2, *p3;

    p1 = &a;
    p2 = &a;
    p3 = &a;
    printf("*p1 = %d\n", *p1);
    printf("*p2 = %d\n", *p2);
    printf("*p3 = %d\n", *p3);

    *p2 = 50;
    printf("*p1 = %d\n", *p1);
    printf("*p2 = %d\n", *p2);
    printf("*p3 = %d\n", *p3);

    *p3 = *p1 + *p2;
    printf("*p1 = %d\n", *p1);
    printf("*p2 = %d\n", *p2);
    printf("*p3 = %d\n", *p3);
    
    return 0;
}