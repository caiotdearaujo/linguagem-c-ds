#include <math.h>
#include <stdio.h>

int main()
{
    // O valor de sqrt(2) é 1,414
    double X = sqrt(2);

    // 1.414>5 condição falsa então
    // não será inserido dentro do
    // declaração if
    if (X > 5)
    {
        /* código inacessível */
        X++;
    }

    return 0;
}