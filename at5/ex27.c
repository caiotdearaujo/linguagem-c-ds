#include <stdio.h>

int main(){
    int n;

    printf("Insira um número: ");
    scanf("%d", &n);

    switch(n){
        case 1:
            printf("Um\n");
            break;
        case 2:
            printf("Dois\n");
            break;
        case 3:
            printf("Três\n");
            break;
        default:
            printf("O número não é 1, 2 ou 3\n");
    }

    return 0;
}