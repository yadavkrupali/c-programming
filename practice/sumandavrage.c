#include <stdio.h>
void main()
{
    int no, sum = 0;
    float avg = 0;
    printf("Input the 10 numbers:");

    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &no);
        sum += no;
    }
    avg = (float)sum / 10;
    printf("The sum of 10 no is: %d", sum);

    printf("\nThe avrage is: %f", avg);
}