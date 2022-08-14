#include <stdio.h>
void main()
{
    int no = 55;

    if (no % 5 == 0)
    {
        if (no % 11 == 0)
        {
            printf("No is divided by 5 & 11");
        }
        else
        {
            printf("No is not divided by 5 & 11");
        }
    }
    else
    {
        printf("No is not divided by 5 & 11");
    }
}