/*
Q5. C program to enter the radius of a circle and find its diameter, circumference and area.
*/

#include <stdio.h>

int main()
{
    float r, D, C, A;

    printf("Enter the radius 'r' of circle: ");
    scanf("%f", &r);

    D = 2 * r;
    C = 2 * 3.14 * r;
    A = 3.14 * (r * r);

    printf("Diameter of circle = %.2f units \n", D);
    printf("Circumference of circle = %.2f units \n", C);
    printf("Area of circle = %.2f sq. units ", A);

    return 0;
}