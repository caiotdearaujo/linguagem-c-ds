#include <stdio.h>

int main()
{
    double x, y;

    printf("Insira um número: ");
    scanf("%lf", &x);

    printf("Insira outro número: ");
    scanf("%lf", &y);

    if (x > y)
    {
        printf("%d é maior que %d", x, y);
    }
    else
    {
        printf("%d é igual ou menor %d", x, y);
    }

    return 0;
}