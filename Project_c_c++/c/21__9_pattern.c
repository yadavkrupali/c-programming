/*
          1
         2 2
        3 3 3
       4 4 4 4
      5 5 5 5 5

 */
#include <stdio.h>
void main()
{

    for (int row = 0; row <= 5; row++)
    {

        for (int space = 5; space > row; space--)
        {
            printf(" ");
        }
        for (int col = 0; col < row; col++)
        {
            printf("%d ", row);
        }
        printf("\n");
    }
}
