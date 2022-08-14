// WAP to make summation of first and last digit

#include <stdio.h>
void main()
{
    int no, sum = 0, rem;
    printf("Enter the no: ");

    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &no);

        if (i == 1 || i == 5)
        {
            sum = sum + no;
        }
    }
    printf(" \nsum of first and last no: %d", sum);
}
