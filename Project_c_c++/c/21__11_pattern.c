/*
 1
 1 0
 1 0 1
 1 0 1 0
 1 0 1 0 1

 */
#include <stdio.h>
void main()
{
    int no = 1, no2 = 0;
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            if (col % 2 == 0)
            {
                printf("%d ", no2);
            }
            else

                printf("%d ", no);
        }
        printf("\n");
    }
}