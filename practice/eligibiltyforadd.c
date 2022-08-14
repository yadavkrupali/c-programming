#include <stdio.h>
void main()
{
    int marksofmath, marksofphy, marksofchem, totalofthree, totalmath_phy;

    printf("Enter the marksofmath: ");
    scanf("%d", &marksofmath);

    printf("Enter the  marksofphy: ");
    scanf("%d", &marksofphy);

    printf("Enter the marksofchem: ");
    scanf("%d", &marksofchem);

    totalofthree = marksofmath + marksofphy + marksofchem;
    printf("\nTotal of three sub: %d", totalofthree);

    totalmath_phy = marksofmath + marksofphy;
    printf("\nTotal of two sub: %d", totalmath_phy);

    if (marksofmath >= 65 && marksofphy >= 55 && marksofchem >= 50 && (totalofthree >= 190 || totalmath_phy >= 140))
    {

        printf("\nThe candidate is eligible for admission");
    }
    else
        printf("\nThe candidate is not eligible for admission");
}