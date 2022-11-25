// WAP to calculate sum of 5 subject & find the percentage ,subject marks entered by user.
#include <stdio.h>
void main()
{
    int MraksOf1stSub, MraksOf2ndSub, MraksOf3rdSub, MraksOf4thSub, MraksOf5thSub, Total_of_marks = 0;
    float percentage = 0;

    printf("Enter the marks of 1st subject:");
    scanf("%d", &MraksOf1stSub);

    printf("Enter the marks of 2nd subject:");
    scanf("%d", &MraksOf2ndSub);

    printf("Enter the marks of 3rd subject:");
    scanf("%d", &MraksOf3rdSub);

    printf("Enter the marks of 4th subject:");
    scanf("%d", &MraksOf4thSub);

    printf("Enter the marks of 5th subject:");
    scanf("%d", &MraksOf5thSub);

    Total_of_marks = MraksOf1stSub + MraksOf2ndSub + MraksOf3rdSub + MraksOf4thSub + MraksOf5thSub;

    printf("\n\nSum of 5 subject is :%d", Total_of_marks);

    percentage = Total_of_marks / 5;
    printf("\n\npercentage is: %f", percentage);
}