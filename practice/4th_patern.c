#include <stdio.h>
void main()
{

    for (int row = 1; row <= 4; row++)
    {
        int no = 1;

        for (int col = 1; col <= row; col++)
        {
            printf("%d", no);
            no++;
        }
        printf("\n");
    }
}