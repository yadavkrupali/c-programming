//  Write a program to perform addition, subtraction, multiplication and division of two numbers using Function
#include <stdio.h>
void addition(int a, int b)
{
    printf("Adiition of %d + %d= %d\n", a, b, a + b);
}

void subtraction(int a, int b)
{
    printf("Subtraction of %d - %d= %d\n", a, b, a - b);
}

void multiplication(int a, int b)
{
    printf("Multiplication of %d * %d= %d\n", a, b, a * b);
}

void division(int a, int b)
{
    printf("Division of %d / %d= %d\n", a, b, a / b);
}

void main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    addition(a, b);
    subtraction(a, b);
    multiplication(a, b);
    division(a, b);
}
