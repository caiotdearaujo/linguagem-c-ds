#include <stdio.h>

int main()
{
    double side;
    double area;

    printf("Enter the length of a side of a square: ");
    scanf("%lf", &side);

    area = side * side;

    printf("\nThe area of the square is: %lf\n", area);

    return 0;
}