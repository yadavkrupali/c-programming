#include <stdio.h>
void main()
{

    for (int row = 1; row <= 4; row++)
    {
        if (row % 2 == 0)
        {
            printf("**");
        }
        else
            printf("*");

        printf("\n");
    }
}