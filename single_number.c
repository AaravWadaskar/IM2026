#include <stdio.h>
#include <stdlib.h>

int singleNumber(int* nums, int numsSize) {
    int result = 0;
    for (int i = 0; i < numsSize; i++)
    {
        result = result ^ nums[i];
    }
    return result;
}

int main (void)
{
    int nums[] = {5, 2, 7, 2, 7, 4, 5};
    int num = singleNumber (nums, 7);
    printf("Single Number: %d\n", num);
}
