// WAP to find the max number from the given three number using ternary operator.
#include <stdio.h>
void main()
{

    int no1, no2, no3, max = 0;
    printf("Enter the number 1:");
    scanf("%d", &no1);

    printf("Enter the number 2:");
    scanf("%d", &no2);

    printf("Enter the number 3:");
    scanf("%d", &no3);

    max = no1 > no2 ? (no1 > no3 ? no1 : no3) : (no2 > no3 ? no2 : no3);

    printf("max number :%d", max);
}
