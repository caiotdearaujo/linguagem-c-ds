#include <stdio.h>
#include <math.h>

int main(){
    double side;
    double area;

    printf("\nEnter the length of a side of a square: ");
    scanf("%lf", &side);

    area = pow(side, 2);

    printf("\nThe area of the square is: %lf\n", area);

    return 0;
}