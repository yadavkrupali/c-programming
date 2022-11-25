// WAP to find the max number from the given three number using nested if.
#include <stdio.h>
void main()
{
    int no1, no2, no3;
    printf("Enter the number 1:");
    scanf("%d", &no1);

    printf("Enter the number 2:");
    scanf("%d", &no2);

    printf("Enter the number 3:");
    scanf("%d", &no3);

    if (no1 < no2)
    {
        if (no2 < no3)
        {
            printf("max number=%d", no3);
        }
        else
            printf("max number=%d", no2);
    }
    else
    {
        if (no1 < no3)
        {
            printf("max number=%d", no3);
        }
        else
            printf("max number=%d", no1);
    }
}
