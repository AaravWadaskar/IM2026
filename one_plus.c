/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    if (digits[digitsSize -1] < 9)
    {
        *returnSize = digitsSize;
        digits[digitsSize -1] = digits[digitsSize -1] + 1;
        return digits;
    }
    int car = 1;
    int nines = 0;
    for (int i = digitsSize - 1; i >= 0; i--)
    {
        digits[i] += car;
        car = 0;
        if(digits[i] > 9)
        {
            car = 1;
            digits[i] = 0;
            nines++;
        }
    }
    *returnSize = digitsSize;

    if (nines == digitsSize)
    {
        *returnSize = digitsSize + 1;
        int* result = malloc((digitsSize + 1) * sizeof(int));
        result[0] = 1;
        for (int i = 1; i < *returnSize; i++)
        {
            result[i] = 0;
        }
        return result;
    }
    return digits;
}

int main (void)
{
    int arr[] = {4, 3, 2, 1};
    int size;
    int* ans = plusOne (arr, 4, &size);
}