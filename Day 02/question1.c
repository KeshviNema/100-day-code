//Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>

int main()
{
    int length, breadth;
    int area, perimeter;
printf("Enter the length:");
    scanf("%d", &length);
    printf("Enter the breadth:");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area=%d, Perimeter=%d", area, perimeter);

    return 0;
}