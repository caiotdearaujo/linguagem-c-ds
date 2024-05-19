#include <stdio.h>

int main()
{
    char a;
    int x;
    float p, q;

    a = 'A';
    x = 125;
    p = 10.25;
    q = 18.76;

    printf("%c está armazenado em %lu", a, (unsigned long int)&a);
    printf("\n%d está armazenado em %lu", x, (unsigned long int)&x);
    printf("\n%f está armazenado em %lu", p, (unsigned long int)&p);
    printf("\n%f está armazenado em %lu", q, (unsigned long int)&q);
    printf("\n");

    return 0;
}