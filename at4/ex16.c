#include <stdio.h>

int main()
{
    double n;

    printf("\nInsira um número: ");
    scanf("%lf", &n);

    if (n > 0)
    {
        printf("O número é positivo");
    }
    else
    {
        printf("O número é negativo");
    }

    return 0;
}