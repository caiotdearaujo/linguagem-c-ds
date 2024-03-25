#include <stdio.h>

int main(){
    int n;

    printf("Insira um número: ");
    scanf("%d", &n);

    switch(n){
        case 10:
            printf("Dez\n");
            break;
        case 50:
            printf("Cinquenta\n");
            break;
        case 100:
            printf("Cem\n");
            break;
        default:
            printf("O número não é 10, 50 ou 100\n");
    }

    return 0;
}