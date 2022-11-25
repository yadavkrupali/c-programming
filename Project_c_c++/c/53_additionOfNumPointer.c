// Write program to make a addition of two number using pointer
#include <stdio.h>
void main()
{
    int num1, num2, *p, *q, sum;
    printf("Enter 1st number:");
    scanf("%d", &num1);
    printf("Enter 2nd number:");
    scanf("%d", &num2);

    p = &num1, q = &num2;
    sum = *p + *q;

    printf("Sum of two numbers: %d", sum);
}