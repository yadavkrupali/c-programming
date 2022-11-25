/*
  1
  2 3
  4 5 6
  7 8 9 10
  11 12 13 14 15

 */
#include <stdio.h>
void main()
{
    int no = 1;
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", no++);
        }
        printf("\n");
    }
}