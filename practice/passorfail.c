#include <stdio.h>
void main()
{

    int percentage;
    printf("Enter the percentage: ");
    scanf("%d", &percentage);

    if (percentage >= 35)
    {
        printf("Candidate is pass");
    }
    else
    {
        printf("Candidate is fail");
    }
}