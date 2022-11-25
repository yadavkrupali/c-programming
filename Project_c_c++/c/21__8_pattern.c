/*
               1
              1 2
             1 2 3
            1 2 3 4
           1 2 3 4 5

*/
#include <stdio.h>
void main()
{

    for (int row = 1; row <= 6; row++)
    {

        for (int space = 6; space > row; space--)
        {
            printf(" ");
        }
        for (int col = 1; col < row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
}
