#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int *p;
    int i;

    p = &a[0];

    printf("Os valores são (a[i]):   ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nOs valores são (i[a]):   ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", i[a]);
    }

    printf("\nOs valores são (*(a+i)): ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(a + i));
    }

    printf("\nOs valores são (*(p+i)): ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }

    printf("\nOs valores são (p[i]):   ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }

    printf("\nOs valores são (*p++):   ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *p++);
    }

    printf("\n");

    return 0;
}