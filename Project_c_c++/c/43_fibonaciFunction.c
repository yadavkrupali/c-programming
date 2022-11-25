//  write a program to print the Fibonacci series using function
#include <stdio.h>
void fibo(int no)
{
    int i, a = 0, b = 1, fibo;
    printf("%d ", a);
    printf("%d ", b);
    for (i = 1; i <= no; i++)
    {
        fibo = a + b;
        a = b;
        b = fibo;
        printf("%d ", fibo);
    }
}
void main()
{
    int no;

    printf("Enter the no:");
    scanf("%d", &no);

    fibo(no);
}