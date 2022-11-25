// Write a program to enter a five elements using Array and print it on a screen
#include <stdio.h>
#define n 5
void main()
{
    int a[n] = {1, 2, 3, 4, 5};
    for (int i = 0; i < n; i++)
    {
        printf("\n%d Elements:%d", i, a[i]);
    }
}