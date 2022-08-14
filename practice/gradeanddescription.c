#include <stdio.h>
void main()
{
    char ch;

    printf("Input the grade:");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'E':
        printf("You have chosen: Excellent");
        break;
    case 'V':
        printf("You have chosen: VeryGood");
        break;
    case 'G':
        printf("You have chosen: Good");
        break;
    case 'A':
        printf("You have chosen: Average");
        break;
    case 'F':
        printf("You have chosen: Fail");
        break;

    default:
        printf(" Invalid Input ");
        break;
    }
}