// WAP to find area of triangle
#include <stdio.h>
void main()
{
    float height, base, Area_of_triangle;

    printf("Enter the value of height: ");
    scanf("%f", &height);

    printf("Enter the value of base: ");
    scanf("%f", &base);

    Area_of_triangle = height * base / 2;
    printf("Ans:%f", Area_of_triangle);
}