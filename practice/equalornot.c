#include <stdio.h>
void main()
{
    int num1, num2;
    printf("Enter the num1: ");
    scanf("%d", &num1);

    printf("Enter the num2: ");
    scanf("%d", &num2);

    if (num1 == num2)
    {
        printf("They are equal");
    }
    else
    {
        printf("They are not equal");
    }
}
