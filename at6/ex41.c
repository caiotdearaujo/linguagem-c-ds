#include <stdio.h>

int main()
{
    const int DOOR_CODE = 3141;
    int userInput;

    printf("Insira o código da porta: ");
    scanf("%d", &userInput);

    if (userInput == DOOR_CODE)
    {
        printf("Código correto, porta desbloqueada\n");
    }
    else
    {
        printf("Código incorreto, porta trancada\n");
    }

    return 0;
}