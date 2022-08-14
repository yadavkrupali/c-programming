#include <stdio.h>
void main()
{
    int sp = 4;
    for (int row = 1; row <= 5; row++)
    {
        for (int space = 1; space <= sp; space++)
        {
            printf("  ");
        }

        for (int col = 1; col <= row * 2 - 1; col++)
        {
            printf("* ");
        }
        sp--;
        printf("\n");
    }
    sp = 1;
    for (int row = 4; row >= 1; row--)
    {
        for (int space = 1; space <= sp; space++)
        {
            printf("  ");
        }
        for (int col = row * 2 - 1; col >= 1; col--)
        {
            printf("* ");
        }
        sp++;
        printf("\n");
    }
}