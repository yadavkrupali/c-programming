/*
     *
    * *
   * * *
  * * * *
 * * * * *

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
            printf("* ");
        }
        printf("\n");
    }
}
