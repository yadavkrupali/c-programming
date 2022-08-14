#include <stdio.h>
void main()
{

    int no, sum = 0;
    printf("Enter the no: ");
    scanf("%d", &no);
    printf("The nutural number is:\n");

    for (int i = 1; i <= no; i++)
    {
        printf(" %d ", i);
        sum = sum + i;
    }
    printf("\nThe sum of nutural number is:\n%d", sum);
}