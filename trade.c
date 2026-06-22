#include <stdio.h>
#include <stdlib.h>

int maxProfit(int* prices, int pricesSize) {
    if (pricesSize <= 1)
        return 0;

    int min = prices[0];
    int prof = 0;

    for (int i = 0; i < pricesSize; i++)
    {
        if (min > prices[i])
            min = prices[i];
        else if (prices[i] - min > prof)
            prof = prices[i] - min;
    }
    if (prof <= 0)
        return 0;
    return prof;
}

int main (void)
{
    int amts[] = {7, 1, 5, 3, 6, 4};
    int prof = maxProfit (amts, 6);
    printf("Max Profit: %d\n", prof);
}