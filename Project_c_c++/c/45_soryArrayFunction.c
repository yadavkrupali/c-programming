// write a program to sort the array using function
#include <stdio.h>
#define n 5
void ascending(int a[n])
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i] < a[j])
            {
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nArray sort in ascending :\n");
    for (int i = 1; i <= n; i++)
    {
        printf("\n%d", a[i]);
    }
}

void descending(int a[n])
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i] > a[j])
            {
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nArray sort in descending :\n");
    for (int i = 1; i <= n; i++)
    {
        printf("\n%d", a[i]);
    }
}
void main()
{
    int a[n], sort;
    printf("Enter the elements in the array:\n");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    ascending(a);
    descending(a);
}
