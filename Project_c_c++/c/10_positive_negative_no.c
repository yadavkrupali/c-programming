// WAP to check the given number is positive or negative.

#include <stdio.h>
void main()
{
    int no;
    printf("Enter the no: ");
    scanf("%d", &no);

    if (no == 0)
    {
        printf(" this is zero");
    }
    else if (no > 0)
    {
        printf(" this is positive no");
    }
    else
    {
        printf(" this is negative no");
    }
}