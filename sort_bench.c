#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int inp[] = {7, 3, 1, 9, 10, 6, 8, 2, 5, 4};
    int comparisons = 0;
    int swaps = 0;

    for (int i = 0; i < 9; i++)
    {
        int min = i;
        for (int j = i + 1; j < 10; j++)
        {
            comparisons++;
            if (inp[min] > inp[j])
            {
                min = j;
            }
        }
        int t = inp[i];
        inp[i] = inp[min];
        inp[min] = t;
        swaps++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", inp[i]);
    }
    printf("\n");
    printf("Comparisons: %d\n", comparisons);
    printf("Swaps: %d\n", swaps);
}