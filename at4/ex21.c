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
    else if (x == y)
    {
        printf("%d é igual %d", x, y);
    }
    else
    {
        printf("Ambos os números são iguais");
    }

    return 0;
}