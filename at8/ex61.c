#include <stdio.h>

void display(char *);

int main()
{
    char str[] = "Brasil";

    display(str);
    printf("\n");

    return 0;
}

void display(char *ps)
{
    int i;

    printf("String: ");
    for (i = 0; *(ps + i) != '\0'; i++)
    {
        printf("%c", *(ps + i));
    }
}