#include <stdio.h>

int main() {
    float r, h, v;
    float *pr, *ph, *pv;

    const float PI = 3.14159;

    pr = &r;
    ph = &h;
    pv = &v;

    printf("Insira o raio da base do cilindro (em m): ");
    scanf("%f", pr);

    printf("Insira a altura do cilindro (em m): ");
    scanf("%f", ph);

    *pv = PI * (*pr) * (*pr) * (*ph);

    printf("O volume do cilindro é: %.2fm³\n", *pv);

    return 0;
}