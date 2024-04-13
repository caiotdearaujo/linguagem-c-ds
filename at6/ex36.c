#include <stdio.h>

int main()
{
    int items;
    float costPerItem;
    char currency[2];

    printf("Insira a quantidade de ítens a serem adquiridos: ");
    scanf("%d", &items);

    printf("Insira o custo por item: ");
    scanf("%f", &costPerItem);

    printf("Insira a moeda (o símbolo): ");
    scanf("%s", currency);

    float totalCost = items * costPerItem;

    printf("O custo total dos %d ítens foi de %s%.2f\n", items, currency, totalCost);

    return 0;
}