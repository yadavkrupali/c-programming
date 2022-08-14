#include <stdio.h>
void main()
{
    int temp;
    printf("Input the temp in centigrade: ");
    scanf("%d", &temp);

    if (temp < 0)
    {
        printf("\nIt's freezing weather ");
    }
    else if (temp >= 0 && temp < 10)
    {
        printf("\nIt's very cold weather ");
    }
    else if (temp >= 10 && temp < 20)
    {
        printf("\nIt's cold weather ");
    }
    else if (temp >= 20 && temp < 30)
    {
        printf("\nIt's normal in temp ");
    }
    else if (temp >= 30 && temp < 40)
    {
        printf("\nIt's hot weather ");
    }
    else if (temp >= 40)
    {
        printf("\nIt's very hot weather ");
    }

    else
        printf("Invalid input");
}