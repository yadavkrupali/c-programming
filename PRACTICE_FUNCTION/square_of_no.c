// function with parameter ans without return type
#include <stdio.h>
void squ(int a);

void main()
{
    int a;
    printf("Enter the no for square:\n");
    scanf("%d", &a);
    squ(a);
}

void squ(int a)
{
    printf("\nSquare of no is: %d", a * a);
}