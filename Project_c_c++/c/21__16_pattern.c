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
    int sp = 5;
    for (int i = 4; i >= 1; i--)
    {
        for (int space = 1; space <= sp - i; space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}