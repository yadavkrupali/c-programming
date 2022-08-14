#include <stdio.h>
void main()
{
    char conform_details;
    printf("Enter the confirm: ");
    scanf("%C", &conform_details);

    (conform_details == 'Y') ? printf("You are eligible") : printf("You are  not eligible");
}