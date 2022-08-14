#include <stdio.h>
void main()
{
    for (int row = 1; row <= 3; row++)
    {
        for (int sp = 3; sp >= row; sp--)
        {
            printf("  ");
        }

        for (int col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        for (int cont = row - 1; cont >= 1; cont--)
        {
            printf("%d ", cont);
        }

        printf("\n");
    }
}