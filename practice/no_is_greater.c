#include <stdio.h>
void main()
{

    int no;
    printf("enter the no: ");
    scanf("%d", &no);

    printf("%d", no > 9 && no < 100);
}