// WAP to covert twmperature from degree centigrade to fahrenheit.
#include <stdio.h>
void main()
{
    float celsius, fah;
    printf("Enter the temp celsius: ");
    scanf("%f", &celsius);

    fah = ((celsius * 9) / 5) + 32;
    printf("\nTemp in fah; %f", fah);
}