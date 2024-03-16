#include <stdio.h>

int main()
{
    int x, y, sum;

    printf("Insira um inteiro: ");
    scanf("%d", &x);

    printf("Insira outro inteiro: ");
    scanf("%d", &y);

    sum = x + y;

    printf("A soma dos inteiros é %d\n", sum);

    return 0;
}