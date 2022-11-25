/*
 Write a program to find out the max number from given 10 elements of array.
*/
#include <stdio.h>
#define n 10
void main()
{
    int a[n], max = 0;
    printf("Enter the no:");
    for (int no = 0; no < n; no++)
    {
        scanf("\n%d", &a[no]);
    }
    int i = 1;
    max = a[0];
    while (i < n)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        i++;
    }
    printf("Max number is: %d", max);
}