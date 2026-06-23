#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int compare (const void *a, const void *b)
{
    int norm_a = *(const int*)a;
    int norm_b = *(const int*)b;

    if (norm_a > norm_b)
        return 1;
    else if (norm_a < norm_b)
        return -1;
    return 0;
}

bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    for (int i = 0; i < numsSize - 1; i++)
    {
        if (nums[i] == nums[i + 1])
            return true;
    }
    return false;
}

int main (void)
{
    int nums[] = {1, 2, 3, 1};
    printf("%s\n", (containsDuplicate (nums, 4)) ? "True" : "False");
}