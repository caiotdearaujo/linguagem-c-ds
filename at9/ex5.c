#include <stdio.h>

int main()
{
    // O valor de N é 3
    int N = 2 + 1;

    // 3==4 false então não será
    // inserido dentro da instrução if
    if (N == 4)
    {
        /* código inacessível */
        printf("equal");
    }
    return 0;
}