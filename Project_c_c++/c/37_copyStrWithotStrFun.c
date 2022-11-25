//  Write a program to copy string from one string to another string without using string function
#include <stdio.h>
void main()
{

    char str[100], str2[100];
    int i;
    printf("input the string:\n");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        str2[i] = str[i];
    }

    printf("After copy string:%s", str2);
}