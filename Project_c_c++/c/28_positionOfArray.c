/* Write a Program of find the element of given position from the array*/
#include <stdio.h>
#define n 5
void main()
{
    int a[n] = {20, 12, 10, 45, 5}, p;

    printf("Select the position  from 1 to 5:");
    scanf("%d", &p);

    printf("Element is: %d", a[p - 1]);
}
