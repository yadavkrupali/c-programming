#include <stdio.h>
void main()
{
    int percentage;
    printf("Enter the percentage: ");
    scanf("%d", &percentage);

    if (percentage >= 60)
    {
        if (percentage < 75)
        {
            printf("Candidate in 1st class ");
        }
        else
        {
            printf("Candidate in not  1st class ");
        }
    }
    else
    {
        printf("Candidate in not  1st class ");
    }
}