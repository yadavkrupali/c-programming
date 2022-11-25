// Write a program to convert the string from uppercase to lowercase and vice versa

#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    printf("input the string:\n");
    fgets(str, 100, stdin);

    printf("In upper case: %s", strupr(str));
    printf("In lower case: %s", strlwr(str));
}