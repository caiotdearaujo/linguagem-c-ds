#include <stdio.h>

int main()
{
    int x, y, intDivision, modulo;
    double division;

    printf("Insira um inteiro: ");
    scanf("%d", &x);

    printf("Insira outro inteiro: ");
    scanf("%d", &y);

    if (y)
    {
        intDivision = x / y;
        modulo = x % y;
        division = (double)x / (double)y;
        printf("A divisão inteira dos inteiros é igual a %d com resto %d\n", intDivision, modulo);
        printf("A divisão dos inteiros é igual a %lf\n", division);
    }
    else
    {
        printf("Não é possível dividir por 0\n");
    }

    return 0;
}