// write a program to print the string in reverse order using function
#include <stdio.h>
#include <string.h>
void rev(char str[100])
{
    char str1[100];
    strrev(str);

    printf("String after revers:%s", str);
}
void main()
{

    char str[100];
    printf("Enter the string:");
    scanf("%s", &str);

    rev(str);
}