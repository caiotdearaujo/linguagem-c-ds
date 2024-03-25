#include <stdio.h>
#include <string.h>

int main() {
    char password[64] = "password";
    char input[64];

    do {
        printf("Insira a senha: ");
        scanf("%s", input);
    } while(strcmp(input, password) != 0);
}