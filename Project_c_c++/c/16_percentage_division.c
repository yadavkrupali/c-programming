// WAP user enter the 5 subjects marks . you have to make a total amd find the percentage and division.
#include <stdio.h>
void main()
{
    int sub1, sub2, sub3, sub4, sub5, total_of_sub = 0;
    float percentage = 0;

    printf("Enter the  marks of 1st sub: ");
    scanf("%d", &sub1);

    printf("Enter themarks of 2nd sub: ");
    scanf("%d", &sub2);

    printf("Enter themarks of 3rd sub: ");
    scanf("%d", &sub3);

    printf("Enter themarks of 4th sub: ");
    scanf("%d", &sub4);

    printf("Enter themarks of 5th sub: ");
    scanf("%d", &sub5);

    total_of_sub = sub1 + sub2 + sub3 + sub4 + sub5;
    printf("\nTotal of sub: %d", total_of_sub);

    percentage = total_of_sub / 5;
    printf("\npercentage is: %f", percentage);

    if (percentage >= 75 && percentage <= 100)
    {
        printf("\nDistinction");
    }
    else if (percentage <= 75 && percentage > 60)
    {
        printf("\nFirst class");
    }
    else if (percentage <= 60 && percentage > 50)
    {
        printf("\nSecond class");
    }
    else if (percentage <= 50 && percentage > 35)
    {
        printf("\nPass class");
    }
    else
        printf("\nFail");
}