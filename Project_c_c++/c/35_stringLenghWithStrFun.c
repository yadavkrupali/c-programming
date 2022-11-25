// Write a program to find out the length of given string without using string function
#include <stdio.h>
void main()
{
    char str[100];
    printf("Enter the string:");
    scanf("%s", &str);
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    printf("length:%d", count);
}