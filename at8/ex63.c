#include <stdio.h>

int main() {
    int x, *p, **pp;

    x = 100;
    p = &x;
    pp = &p;

    printf("%d\n", **pp);

    return 0;
}