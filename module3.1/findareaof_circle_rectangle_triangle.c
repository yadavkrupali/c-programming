#include <stdio.h>
#define PI 3.14
// const float PI = 3.14;
void main()
{
    float radius, result;

    printf("Enter radius value: ");
    scanf("%f", &radius);

    result = PI * radius * radius;
    printf("result: %f", result);
}