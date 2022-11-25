// Write a program to count the total number of word from given string without using string function
#include <stdio.h>
void main()
{
    char str[100], count = 1;
    printf("Enter the string:");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++)

    {
        if (str[i] == 0 || str[i] == ' ' || str[i] == '\0')
        {
            count++;
        }
    }
    printf("Total number of word:%d", count);
}