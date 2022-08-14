// WAP to ckeck no is aremstrog and perfect no using function
#include <stdio.h>
void armstrong(int no);
void perfect(int no);
void main()
{
    int no;

    printf("Input any number:");
    scanf("%d", &no);
    armstrong(no);
    perfect(no);
}

void armstrong(int no)
{
    int realno, rem, result = 0;
    realno = no;
    while (realno > 0)
    {
        rem = realno % 10;

        realno = realno / 10;
        result += rem * rem * rem;
    }
    if (result == no)
    {
        printf(" The %d is aremstrong number\n", no);
    }
    else
        printf("The %d is not aremstrong number\n", no);
}
void perfect(int no)
{
    int rem = 0, sum = 0;

    for (int i = 1; i < no; i++)
    {
        rem = no % i;
        if (rem == 0)
        {
            sum += i;
        }
    }
    if (sum == no)
    {
        printf("The %d is perfect number", no);
    }
    else
    {
        printf("The %d is  not perfect number", no);
    }
}