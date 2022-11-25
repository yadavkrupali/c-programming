/* Write a program to find out the second smallest number from the array*/
#include <stdio.h>
#define n 5
void main()
{
    int a[n];
    printf("Enter the elements in the array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] < a[j])
            {

                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Second smallest number from the array: %d", a[1]);
}