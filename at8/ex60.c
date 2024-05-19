#include <stdio.h>

void square(float *);

int main(){
    float a = 10;
    printf("a = %f\n", a);
    square(&a);

    return 0;
}

void square(float *x){
    *x = *x * *x;
    printf("*x = %f\n", *x);
}