#include <stdio.h>
void main()
{
    int seat_no, marks_of_physics, marks_of_chemistry, marks_of_cA, total_of_sub = 0;
    float percentage = 0;

    printf("Enter the student seat no: ");
    scanf("%d", &seat_no);

    printf("Enter the  marks_of_physics: ");
    scanf("%d", &marks_of_physics);

    printf("Enter the marks_of_chemistry: ");
    scanf("%d", &marks_of_chemistry);

    printf("Enter the marks_of_cA: ");
    scanf("%d", &marks_of_cA);

    total_of_sub = marks_of_physics + marks_of_chemistry + marks_of_cA;
    printf("\nTotal of sub: %d", total_of_sub);

    percentage = total_of_sub / 3;
    printf("\npercentage is: %f", percentage);

    if (percentage >= 80 && percentage <= 100)
    {
        printf("\ncongratulation candidate in first class");
    }
    else if (percentage < 80 && percentage >= 60)
    {
        printf("\ncongratulation candidate in second class");
    }
    else if (percentage < 60 && percentage >= 50)
    {
        printf("\ncongratulation candidate in third class");
    }
    else if (percentage < 50 && percentage >= 35)
    {
        printf("\ncongratulation candidate in fourth class");
    }
    else
        printf("\ncandidate is fail");
}