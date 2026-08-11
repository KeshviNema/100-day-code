//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main()
{
    float radius, area, circumference;
    printf("Enter the radius:");
    scanf("%f", &radius);

    area = 3.14159 * radius * radius;
    circumference = 2 * 3.14159 * radius;

    printf("Area=%.2f, Circumference=%.2f", area, circumference);

    return 0;
}