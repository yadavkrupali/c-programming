#include <stdio.h>
void perfect(int no1, int no2);

void main()
{
    int no1 = 1, no2 = 100;
    // printf("Input lowest search limit of perfect numbers:");
    // scanf("%d", &no1);
    // printf("Input highest search limit of perfect numbers:");
    // scanf("%d", &no2);
    perfect(no1, no2);
}
void perfect(int no1, int no2)
{
    printf("The perfect number between %d to %d are:", no1, no2);
    for (int i = no1; i <= no2; i++)
    {
        int sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += i;
            }
        }
        if (sum == i)
        {
            printf("%d = %d\n", i, sum);
        }
    }
}