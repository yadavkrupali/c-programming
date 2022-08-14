#include <stdio.h>
void main()
{
    int no;
    printf("Enter the no: ");
    scanf("%d", &no);

    if (no % 2 == 0 ? printf("No is even") : printf("No is odd"))
        ;
}