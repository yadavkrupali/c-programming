#include <stdio.h>
void main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i);
        sum = sum + i;
    }
    printf("\n%d", sum);
}