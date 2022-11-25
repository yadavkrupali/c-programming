// Write a program co concatenate the two string without using string function
#include <stdio.h>
#include <string.h>
void main()
{
    char str1[50], str2[50];
    int i, j;
    printf("Enter the string 1:");
    gets(str1);

    printf("Enter the string 2:");
    gets(str2);

    i = strlen(str1);

    for (j = 0; str2[j] != '\0'; i++, j++)
    {
        str1[i] = str2[j];
    }

    printf("concat string: %s", str1);
}