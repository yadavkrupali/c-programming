//  Write a program to find out the factorial of given number using function
#include <stdio.h>
void factorial(int no)
{
    int fact = 1;
    for (int i = 1; i <= no; i++)
    {
        fact = fact * i;
    }
    printf("The factorial of no is: %d", fact);
}
void main()
{
    int no;

    printf("Enter thr no:");
    scanf("%d", &no);

    factorial(no);
}