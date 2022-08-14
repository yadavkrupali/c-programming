#include <stdio.h>
void main()
{

    int month;
    printf("Enter the month no in tnteger:");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("Jan");
        break;
    case 2:
        printf("Feb");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("jul");
        break;
    case 8:
        printf("Aug");
        break;
    case 9:
        printf("Sep");
        break;
    case 10:
        printf("oct");
        break;
    case 11:
        printf("Nov");
        break;
    case 12:
        printf("Dec");
        break;

    default:
        printf("Invalid input");
        break;
    }
}