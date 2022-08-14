#include <stdio.h>
void main()
{
    int no, cub;
    printf("Input no of term:");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++)
    {
        cub = i * i * i;
        printf("Number is:%d and cube of no is :%d\n", i, cub);
    }
}