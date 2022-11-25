/*
 Write a program to sort the array of 5 elements
*/
#include <stdio.h>
#define n 5
void main()
{
    int a[n], sort;
    printf("Enter the elements in the array:");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Select your option\n for acend=1\nfor decend=2\n");
    scanf("%d", &sort);

    switch (sort)
    {
    case 1:
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

    case 2:
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

        break;

    default:
        printf("Select 1 OR 2 !!");
        break;
    }
    for (int i = 1; i <= n; i++)
    {
        printf("\n%d", a[i]);
    }
}