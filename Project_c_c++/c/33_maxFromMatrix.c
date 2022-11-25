// . Write a program to find out the Max number from given Matrix
#include <stdio.h>
void main()
{
    int mat[3][3], max;
    printf("Enter any 3*3 matrix: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);
    }
    max = mat[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (max < mat[i][j])
                max = mat[i][j];
        }
    }
    printf("\nLargest Element = %d", max);
}