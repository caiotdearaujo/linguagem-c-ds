#include <stdio.h>

int main()
{
    int a;
    int *aPtr;

    a = 7;
    aPtr = &a;

    printf("O endereço de a é %p\nO valor de aPtr é %p", &a, aPtr);
    printf("\nO valor de a é %d\nO valor de *aPtr é %d", a, *aPtr);
    printf("\n\nMostrando que * e & são complementares\n&*aPtr = %p\n*&aPtr = %p\n", &*aPtr, *&aPtr);

    return 0;
}