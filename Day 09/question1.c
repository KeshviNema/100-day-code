// Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float d, root1, root2;

    
    printf("Enter value of a: ");
    scanf("%f", &a);

    printf("Enter value of b: ");
    scanf("%f", &b);

    printf("Enter value of c: ");
    scanf("%f", &c);

    
    d = b * b - 4 * a * c;

    
    if(d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Roots are real and different\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if(d == 0)
    {
        root1 = -b / (2 * a);

        printf("Roots are real and equal\n");
        printf("Root = %.2f\n", root1);
    }
    else
    {
        printf("Roots are imaginary\n");
    }

    return 0;
}