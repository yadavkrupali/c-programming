//  Write a program to concatenate the two string using pointer
#include <stdio.h>
void main()
{
    char str1[20], str2[20];
    char *p = str1;
    char *q = str2;
    printf("Enter the 1st string: ");
    scanf("%s", &str1);
    printf("Enter the 2nd string: ");
    scanf("%s", &str2);

    while (*(++p))
        ;
    while (*(p++) = *(q++))
        ;

    printf("Concatenated string: %s", str1);
}