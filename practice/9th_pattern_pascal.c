#include <stdio.h>
void main()
{
    int a;
    for (int row = 0; row <= 4; row++)
    {
        for (int space = 4; space > row; space--)
        {
            printf(" ");
        }

        for (int col = 0; col <= row; col++)
        {

            if (col == 0)
            {
                a = 1;
            }
            else
                a = a * (row - col + 1) / col;
            printf("%d ", a);
        }
        printf("\n");
    }
}