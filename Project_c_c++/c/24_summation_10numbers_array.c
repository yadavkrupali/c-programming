/* Write a program to enter a ten elements using Array and make a summation of the
numbers and average of summation
 */
#include <stdio.h>
#define n 10
void main()
{
    int no[n], summation = 0;
    float average = 0;
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &no[i]);
    }
    for (int i = 0; i < n; i++)
    {
        summation = summation + no[i];
    }
    printf("\nSummation of 10 elemetns are:%d", summation);
    average = summation / n;
    printf("\nAverage:%f", average);
}