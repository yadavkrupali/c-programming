// profit and loss
#include <stdio.h>
void main()
{

    int cost_prize, sell_prize, profit, loss;

    printf("Enter the cost prize  : ");
    scanf("%d", &cost_prize);

    printf("Enter the  selling prize  : ");
    scanf("%d", &sell_prize);

    if (sell_prize > cost_prize)
    {
        printf("\nYou can booked your profit");
        profit = sell_prize - cost_prize;
        printf("\nProfit: %d", profit);
    }
    else
    {

        printf("\nYou can booked your loss");
        loss = cost_prize - sell_prize;
        printf("\nloss: %d", loss);
    }
}