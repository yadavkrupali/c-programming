
#include <stdio.h>
void main()
{
    int sp = 5;
    for (int i = 5; i >= 1; i--)
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