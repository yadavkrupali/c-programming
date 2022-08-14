#include <stdio.h>
void main()
{
    int No, i = 1;
    printf("Enter any no:");
    scanf("%d", &No);
    for (i; i <= No; i++)
    {

        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
}