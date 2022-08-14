#include <stdio.h>
#define n 5
void largest(int a[n]);
void main()
{
    int a[n];
    printf("Input the number of elements to be stored in the array:5");
    printf("\nInput 5 elements in the array: \n");
    for (int i = 0; i <= n; i++)
    {
        printf("elements-%d:", i);
        scanf("%d", &a[i]);
    }
    largest(a);
}
void largest(int a[n])
{
    int lar = 0;
    lar = a[0];
    for (int i = 1; i <= n; i++)
    {

        if (lar < a[i])
        {
            lar = a[i];
        }
    }
    printf("The largest element in the array is:%d", lar);
}