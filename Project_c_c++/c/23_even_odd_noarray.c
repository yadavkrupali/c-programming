/* Write a program to enter a ten elements using Array and find out the to count the
total number of odd and even numbers*/
#include <stdio.h>
#define n 10
void main()
{
    int no[n], totalEven = 0, totalOdd = 0;
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &no[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (no[i] % 2 == 0)
        {
            totalEven++;
        }
        else
            totalOdd++;
    }
    printf("Total even numbers are:%d\n", totalEven);
    printf("Total odd numbers are:%d", totalOdd);
}