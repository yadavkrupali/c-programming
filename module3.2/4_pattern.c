
#include <stdio.h>
void main()
{

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 4; col >= row; col--)
        {
            printf("* ");
        }
        printf("\n");
    }
}