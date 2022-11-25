// WAP to find simple intrest
#include <stdio.h>
void main()
{
    int principal, time;
    float rate, simple_interest;
    printf("Enter the  balance:");
    scanf("%d", &principal);

    printf("Enter the interest rate:");
    scanf("%f", &rate);

    printf("Enter the time:");
    scanf("%d", &time);

    simple_interest = principal * rate * time / 100;
    printf("%f\n", simple_interest);
}