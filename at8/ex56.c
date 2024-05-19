#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;

    int *p[3], *temp;

    p[0] = &a;
    p[1] = &b;
    p[2] = &c;

    printf("Os valores são: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", *p[i]);
    }

    temp = p[0];
    p[0] = p[2];
    p[2] = temp;

    printf("\nOs valores são: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", *p[i]);
    }

    printf("\n");

    return 0;
}