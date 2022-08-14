#include <stdio.h>
void main()
{
    int no;
    for (int row = 1; row <= 4; row++)
    {

        for (int col = 1; col <= row; col++)
        {

            no = row;

            printf("%d", no);
        }

        printf("\n");
    }
}