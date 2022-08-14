// WAP to check no is perfct no or not

#include <stdio.h>
void main()
{
    int no, rem = 0, sum = 0;
    printf("Enter the no:");
    scanf("%d", &no);

    for (int i = 1; i < no; i++)
    {
        rem = no % i;
        if (rem == 0)
        {
            sum += i;
        }
    }
    if (sum == no)
    {
        printf("the %d is perfect number", no);
    }
    else
    {
        printf("the %d is  not perfect number", no);
    }
}