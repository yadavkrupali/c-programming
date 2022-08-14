#include <stdio.h>
#define n 5
void minimax(int a[n]);
void main()
{
    int a[n];
    printf("Input 5 elements in array:\n");
    for (int i = 0; i <= n; i++)
    {
        printf("Elements-%d:", i);
        scanf("%d", &a[i]);
    }
    minimax(a);
}

void minimax(int a[n])
{
    int max = a[0];
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }

        if (min > a[i])
        {
            min = a[i];
        }
    }
    printf("max:%d", max);

    printf("\nmini:%d", min);
}
