#include <stdio.h>
#include <string.h>

int main()
{
    char input[15];

    while (1)
    {
        printf("Insira seu gênero: ");
        scanf("%s", input);

        if (strcmp(input, "masculino") == 0 || strcmp(input, "feminino") == 0)
        {
            break;
        }

        printf("Insira um gênero válido\n");
    }

    printf("Obrigado por inserir um gênero válido\n");
    printf("Você é do gênero %s\n", input);

    return 0;
}