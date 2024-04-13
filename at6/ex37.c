#include <stdio.h>

int main()
{
    int maxPontuation = 500;
    int userPontuation = 400;

    float percentage = (float)userPontuation / maxPontuation * 100;

    printf("A porcentagem de pontos alcançados pelo usuário é de %.2f por cento\n", percentage);

    return 0;
}