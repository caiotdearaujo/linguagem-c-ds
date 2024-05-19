#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;
    
    printf("a : %d\n", *ptr);
    printf("&a : %p\n", ptr);
    printf("&a : %lu\n", (unsigned long int) ptr);

    return 0;
}