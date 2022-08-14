#include <stdio.h>
void main()
{
    int height;

    printf("Enter the height of person in feet: ");
    scanf("%d", &height);

    if (height >= 1 && height <= 4.4)
    {
        printf("The person is dward");
    }
    else if (height >= 4.5 && height <= 5.4)
    {
        printf("The person is average");
    }
    else if (height >= 5.5 && height <= 5.9)
    {
        printf("The person is heighted");
    }
    else if (height >= 6 && height <= 8)
    {
        printf("The person is  over heighted");
    }
    else
        printf("invalid input");
}