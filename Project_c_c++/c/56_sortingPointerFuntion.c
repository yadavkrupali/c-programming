// Write a program to sort the numbers using pointer and functions
#include <stdio.h>
#include <stdlib.h>
#define n 5
void ascending(int *ptr)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (*(ptr + i) < *(ptr + j))
            {
                int temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    printf("\nArray sort in ascending :\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", *(ptr + i));
    }
}

void descending(int *ptr)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (*(ptr + i) > *(ptr + j))
            {
                int temp;
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    printf("\nArray sort in descending :\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", *(ptr + i));
    }
}
void main()
{
    int *ptr, sort;
    printf("Enter the elements in the array:\n");
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    ascending(ptr);
    descending(ptr);
}