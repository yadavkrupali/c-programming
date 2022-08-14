#include <stdio.h>
void even();
void odd();
void main()
{
    int a;
    printf("Input any number:");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        even();
    }
    else
    {
        odd();
    }
}

void even()
{
    printf("The entered number is even\n");
}
void odd()
{
    printf("The entered number is odd\n");
}