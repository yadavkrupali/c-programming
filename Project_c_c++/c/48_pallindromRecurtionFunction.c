//  Write a Program of Print a number and check the number is palindrome or not using recursive Function
#include <stdio.h>
int main()
{
    int num, p;
    printf("Enter the number: ");
    scanf("%d", &num);
    p = rev(num);
    if (p == num)
    {
        printf("%d is a palindrome number", num);
    }
    else
    {
        printf("%d is a not palindrome number", num);
    }
}

int rev(int n)
{
    static int t = 0;
    if (n == 0)
        return t;
    t = (t * 10) + (n % 10);
    return rev(n / 10);
}
