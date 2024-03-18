#include <stdio.h>

int main()
{
    int n;

    printf("Insira um inteiro: ");
    scanf("%d", &n);

    if (n % 2)
    {
        printf("O número é ímpar");
    }
    else
    {
        printf("O número é par");
    }

    return 0;
}