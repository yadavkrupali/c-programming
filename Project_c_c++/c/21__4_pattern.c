#include <stdio.h>
void main()
{

    for (int i = 0; i <= 5; i++)
    {
        for (int j = 5; j >= 0; j--)
        {
            if (j >= i)
            {
                printf(" ");
            }
            else
                printf("*");
        }
        printf("\n");
    }
}