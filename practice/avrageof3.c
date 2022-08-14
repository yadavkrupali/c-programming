#include <stdio.h>
void main()
{
    int n1, n2, n3;
    float avrage;
    printf("enter the no: ");
    scanf("%d", &n1);

    printf("enter the no: ");
    scanf("%d", &n2);

    printf("enter the no: ");
    scanf("%d", &n3);

    avrage = (n1 + n2 + n3) / 3;
    printf("%f\n", avrage);
}