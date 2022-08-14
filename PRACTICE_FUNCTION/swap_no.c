#include <stdio.h>
void swap(int n1, int n2, int tmp);
void main()
{
    int n1, n2, tmp;
    printf("Input 1st no:");
    scanf("%d", &n1);
    printf("Input 2nd no:");
    scanf("%d", &n2);
    printf("Before swaping:n1=%d,n2=%d", n1, n2);
    swap(n1, n2, tmp);
}

void swap(int n1, int n2, int tmp)
{
    tmp = n1;
    n1 = n2;
    n2 = tmp;
    printf("\nAfter swaping:n1=%d,n2=%d", n1, n2, tmp);
}