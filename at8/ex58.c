#include <stdio.h>

void display(char *);

int main()
{
    char str[] = "ETE Porto Digital";
    display(str);

    return 0;
}

void display(char *ps)
{
    printf("String: %s\n", ps);
}