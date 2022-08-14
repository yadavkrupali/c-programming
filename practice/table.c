#include <stdio.h>
void main()
{
    int no;
    printf("Enter the no for table:");
    scanf("%d", &no);

    for (int i = 1; i <= 10; i++)
    {
        printf("%dx%d=%d\n", no, i, no * i);
    }
}