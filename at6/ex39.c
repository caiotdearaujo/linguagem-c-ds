#include <stdio.h>

int main()
{
    int myAge;

    printf("Insira sua idade: ");
    scanf("%d", &myAge);

    if (myAge >= 18)
    {
        printf("Velho suficiente para votar");
    }
    else
    {
        printf("Não tem idade suficiente para votar");
    }
}