//  write a program to swap the two numbers without using third variable using poiner
#include <stdio.h>
void main()
{
    int a, b, *p, *q;

    printf("Enter the value of a:\n a= ");
    scanf("%d", &a);

    printf("Enter the value of b:\n b= ");
    scanf("%d", &b);
    p = &a, q = &b;
    a = a + b;

    b = a - b;

    a = a - b;
    printf(" Swap of a and b value \na is:%d\t b is:%d\n", a, b);
}