#include <stdio.h>

int main()
{
    int n;

    printf("Insira um número: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("%d é positivo\n", n);
    }
    else if (n < 0)
    {
        printf("%d é negativo\n", n);
    }
    else
    {
        printf("%d é nulo\n", n);
    }

    return 0;
}