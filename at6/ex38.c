#include <stdio.h>

int main()
{
    int idade;

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Você é obrigado a votar\n");
    }
    else if (idade >= 16)
    {
        printf("Você pode votar, mas é opcional\n");
    }
    else
    {
        printf("Você não pode votar\n");
    }

    return 0;
}