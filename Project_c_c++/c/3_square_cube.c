// WAP to make square and cube of number
#include <stdio.h>
void main()
{
    int no, square = 0, cube = 0;
    printf("Enter the numer:");
    scanf("%d", &no);

    square = no * no;
    cube = no * no * no;
    printf("square of %d is: %d", no, square);
    printf("\ncube of %d is: %d", no, cube);
}