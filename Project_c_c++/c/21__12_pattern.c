/*
1
4 4
9 9 9
16 16 16 16
25 25 25 25 25

 */
#include <stdio.h>
void main()
{

    for (int i = 0; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i * i);
        }
        printf("\n");
    }
}