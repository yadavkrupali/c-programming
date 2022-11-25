// write a program to find out the Square and cube of given number using function
#include <stdio.h>
void square(int num)
{
    printf("Square: %d\n", num * num);
}
void cube(int num)
{
    printf("cube: %d", num * num * num);
}
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    square(num);
    cube(num);
}