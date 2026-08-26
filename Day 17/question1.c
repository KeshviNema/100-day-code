// Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>

int main()
{
    int n, original, digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if(sum == original)
    {
        printf("Number is an Armstrong number\n");
    }
    else
    {
        printf("Number is not an Armstrong number\n");
    }

    return 0;
} 