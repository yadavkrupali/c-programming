#include <stdio.h>
void main()
{
    int no1, no2, user_input;

    printf("Enter the first integer: ");
    scanf("%d", &no1);

    printf("Enter the second integer: ");
    scanf("%d", &no2);

    printf("Input your option:\n1-Addition.\n2-substraction.\n3-Multiplication.\n4-division.\n5-Exit.\n");
    scanf("%d", &user_input);

    switch (user_input)
    {
    case 1:
        printf("The addition of no1 and no2 is: %d", no1 + no2);
        break;
    case 2:
        printf("The substraction of no1 and no2 is: %d", no1 - no2);
        break;
    case 3:
        printf("The Multiplication of no1 and no2 is: %d", no1 * no2);
        break;
    case 4:
        printf("The division of no1 and no2 is: %d", no1 / no2);
        break;
    case 5:
        printf("Exit ");
        break;

    default:
        printf("Invalid input ");
        break;
    }
}