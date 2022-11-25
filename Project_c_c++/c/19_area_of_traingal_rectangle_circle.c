// WAP to find out the area of triangle, rectangle and circle using if condition
#include <stdio.h>
#define pi 3.14
void main()
{
    int select;
    printf("Select below options:\n1=area of triangle\n2=area of rectangle\n3=area of circle\n");
    scanf("%d", &select);

    if (select == 1)
    {
        float height, base, Area_of_triangle;

        printf("Enter the value of height: ");
        scanf("%f", &height);

        printf("Enter the value of base: ");
        scanf("%f", &base);

        Area_of_triangle = height * base / 2;
        printf("Ans:%f", Area_of_triangle);
    }
    else if (select == 2)
    {
        int length, width, Area_of_rectangle;

        printf("Enter the value of length: ");
        scanf("%d", &length);

        printf("Enter the value of width: ");
        scanf("%d", &width);

        Area_of_rectangle = length * width;
        printf("Ans:%d", Area_of_rectangle);
    }
    else
    {
        float redius, area_of_circle;
        printf("Enter the value of redius: ");
        scanf("%f", &redius);

        area_of_circle = pi * redius * redius;
        printf("Ans:%f", area_of_circle);
    }
}