#include <stdio.h>

int main() {
    int i = 1;
    int number;

    printf("Insira um número: ");
    scanf("%i", &number);

    do {
        printf("%i\n",(number*i));
        i++;
    } while(i <= 5);

    return 0;
}