#include <stdio.h>

int main()
{
    int a = 2;

    for (;;)
    {
        if (a == 2)
        {
            break;

            // Ele nunca será executado, então
            // o mesmo erro estará lá.
            printf("Escola Técnica Estadual Porto Digital");
        }
    }

    return 0;
}