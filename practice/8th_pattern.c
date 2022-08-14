#include <stdio.h>
void main()
{
    int no = 1;
    for (int row = 1; row <= 4; row++)
    {
        for (int space = 4; space > row; space--)
        {
            printf(" ");
        }

        for (int col = 1; col <= row; col++)
        {
            printf("%d ", row);
        }
        printf("\n");
    }
}