//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main()
{
    int a, b;
    int sum, diff, product, quotient;
    printf("Enter first number =");
    scanf("%d", &a);
    printf("Enter second number =");
     scanf("%d", &b);

    sum = a + b;
    diff = a - b;
    product = a * b;

    printf("Sum=%d\nDiff=%d\nProduct=%d\n", sum, diff, product);

    if(b != 0)
    {
        quotient = a / b;
        printf("Quotient=%d\n", quotient);
    }
    else
    {
        printf(", Quotient=Not Valid\n");
    }

    return 0;
}