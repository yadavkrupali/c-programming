#include <stdio.h>
void prime(int no);

void main()
{
    int no;

    printf("Input any number:");
    scanf("%d", &no);
    prime(no);
}
void prime(int no)
{
    int result = 0;
    // 0 and 1 is not prime no
    if (no == 0 || no == 1)
        result = 1;

    for (int i = 2; i <= no / 2; i++)
    {
        if (no % i == 0)
        {
            result = 1;
            break;
        }
    }
    if (result == 1)
    {
        printf("The number %d is not prime number", no);
    }
    else
    {
        printf("The number %d is  prime number", no);
    }
}