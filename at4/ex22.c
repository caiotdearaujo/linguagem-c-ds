#include <stdio.h>

int main()
{
    int digit;

    printf("Insira um dígito de 1 a 5: ");
    scanf("%d", &digit);

    switch (digit)
    {
    case 1:
        printf("O dígito inserido foi 1");
        break;
    case 2:
        printf("O dígito inserido foi 2");
        break;
    case 3:
        printf("O dígito inserido foi 3");
        break;
    case 4:
        printf("O dígito inserido foi 4");
        break;
    case 5:
        printf("O dígito inserido foi 5");
        break;
    default:
        printf("O dígito inserido é inválido");
        break;
    }

    return 0;
}