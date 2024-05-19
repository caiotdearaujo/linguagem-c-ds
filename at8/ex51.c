#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;

    printf("a = %d\n", a);
    printf("&a = %lu\n", (unsigned long int)&a);

    printf("p = %lu\n", (unsigned long int)p);
    printf("*p = %d\n", *p);
    printf("&p = %lu\n", (unsigned long int)&p);

    return 0;
}