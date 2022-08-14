#include <stdio.h>
void main()
{
    int no = 1, sp = 3;

    for (int row = 1; row <= 4; row++)
    {
        for (int space = 1; space <= sp; space++)
        {

            printf(" ");
        }

        for (int col = 1; col <= row; col++)
        {
            printf("%d ", no);
            no++;
        }
        sp--;
        printf("\n");
    }
}