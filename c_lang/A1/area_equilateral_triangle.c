// Q15.Write a C program to calculate area of an equilateral triangle.

#include <stdio.h>
#include <math.h>  // Using for sqrt function
int main()
{
    float side, area;
    printf("Enter side of equilateral triangle: ");
    scanf("%f", &side);
    area = (sqrt(3) / 4) * (side * side);
    printf("Area of equilateral triangle = %.2f", area);
}

