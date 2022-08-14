#include <stdio.h>
void main()
{
    int p, q;
    for (int row = 1; row <= 5; row++)
    {
        if (row % 2 == 0)
        {
            p = 0;
            q = 1;
        }
        else
        {
            p = 1;
            q = 0;
        }

        for (int col = 1; col <= row; col++)
        {

            if (col % 2 == 0)
            {
                printf("%d", q);
            }
            else
                printf("%d", p);
        }
        printf("\n");
    }
}