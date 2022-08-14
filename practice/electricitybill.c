#include <stdio.h>
void main()
{
    int id;
    float unit, Amount_charges;

    printf(" Custmer id no: ");
    scanf("%d", &id);

    printf("Unit consumed: ");
    scanf("%f", &unit);

    if (unit <= 199)
    {
        Amount_charges = unit * 1.20;
        printf("Amount charges@1.20 per unit: %f", Amount_charges);
    }
    else if (unit >= 200 && unit < 400)
    {
        Amount_charges = unit * 1.50;
        printf("Amount charges@1.50 per unit: %f", Amount_charges);
    }
    else if (unit >= 400 && unit < 600)
    {
        Amount_charges = unit * 1.80;
        printf("Amount charges@1.80 per unit: %f", Amount_charges);
    }
    else
    {
        Amount_charges = unit * 2.00;
        printf("Amount charges@2.00 per unit: %f", Amount_charges);
    }
}