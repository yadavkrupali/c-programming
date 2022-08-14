//          A
//       A  B  A
//    A  B  C  B  A

#include <stdio.h>
void main()
{
    char ch;

    for (int row = 0; row <= 4; row++)
    {
        ch = 'A';
        for (int space = 4; space > row; space--)
        {
            printf("  ");
        }

        for (int col = 0; col < row; col++)
        {
            printf("%c ", ch);
            ch++;
        }
        for (int cont = row - 1; cont >= 1; cont--)
        {
            ch = 'A';

            printf("%c ", ch);
            ch++;
        }

        printf("\n");
    }
}