#include <stdio.h>

int main()
{
    int hour;

    printf("Insira a hora atual: ");
    scanf("%d", &hour);

    if (hour >= 0 && hour < 6)
    {
        printf("Boa madrugada\n");
    }
    else if (hour >= 6 && hour < 12)
    {
        printf("Bom dia\n");
    }
    else if (hour >= 12 && hour < 18)
    {
        printf("Boa tarde\n");
    }
    else if (hour >= 18 && hour < 24)
    {
        printf("Boa noite\n");
    }
    else
    {
        printf("Insira uma hora válida\n");
    }

    return 0;
}