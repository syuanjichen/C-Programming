/* Calculate the commission of each trade */

#include <stdio.h>

int main(void)
{
    float trade_cost,commission;

    printf("Enter value of trade: ");
    scanf("%f",&trade_cost);

    while(trade_cost != 0.00f)
    {
        if(trade_cost < 2500.00f)
            commission = 30.00f + 0.017 * trade_cost;
        else if(trade_cost < 6250.00f)
            commission = 56.00f + 0.0066 * trade_cost;
        else if(trade_cost < 20000.00f)
            commission = 76.00f + 0.0034 * trade_cost;
        else if(trade_cost < 50000.00f)
            commission = 100.00f + 0.0022 * trade_cost;
        else if(trade_cost < 500000.00f)
            commission = 155.00f + 0.0011 * trade_cost;
        else
            commission = 255.00f + 0.0009 * trade_cost;

        printf("Commission: %.2f\n\n",commission);

        printf("Enter value of trade: ");
        scanf("%f",&trade_cost);
    }
}