#include <stdio.h>
void main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            int sum = col + row;
            if (sum <= 5)
            {
                printf(" *");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}