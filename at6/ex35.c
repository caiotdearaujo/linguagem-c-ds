#include <stdio.h>

int main()
{
    double height, width;

    printf("Insira a altura do retângulo: ");
    scanf("%lf", &height);

    printf("Insira a largura do retângulo: ");
    scanf("%lf", &width);

    double area = height * width;

    printf("A área do retângulo é %lf\n", area);

    return 0;
}