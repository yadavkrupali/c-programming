#include <stdio.h>
void main()
{

    for (int i = 1; i <= 6; i++)
    {
        for (int j = 6; j >= 1; j--)
        {
            if (j >= i)
            {
                printf(" ");
            }
            else
                printf("%d", j);
        }
        printf("\n");
    }
}