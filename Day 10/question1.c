// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main()
{
    int a, b, c;

    
    printf("Enter first side: ");
    scanf("%d", &a);

    printf("Enter second side: ");
    scanf("%d", &b);

    printf("Enter third side: ");
    scanf("%d", &c);

    
    if(a == b && b == c)
    {
        printf("Equilateral Triangle\n");
    }
    else if(a == b || b == c || a == c)
    {
        printf("Isosceles Triangle\n");
    }
    else
    {
        printf("Scalene Triangle\n");
    }

    return 0;
}