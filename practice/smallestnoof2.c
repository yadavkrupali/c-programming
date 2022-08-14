#include <stdio.h>
void main()
{
    int no;
    printf("enter the no: ");
    scanf("%d", &no);

    printf("%d", no <= 99 && no > 9);
}