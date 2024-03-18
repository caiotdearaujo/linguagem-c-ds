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
    else if (n < 0)
    {
        printf("O número é negativo");
    }
    else
    {
        printf("O número é zero");
    }

    return 0;
}