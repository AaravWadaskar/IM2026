#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int ind1 = 0;
    int ind2 = numbersSize - 1;
    int *ans = malloc(2 * (sizeof(int)));
    for (int i = 0; i < numbersSize; i++)
    {
        int sum = numbers[ind1] + numbers[ind2];
        if (sum == target)
        {
            ans[0] = ind1 + 1;
            ans[1] = ind2 + 1;
            *returnSize = 2;
            break;
        }
        else if (sum > target)
        {
            ind2--;
        }
        else if (sum < target)
        {
            ind1++;
        }
    }
    return ans;
}

int main (void)
{
    int numbers[] = {2, 7, 11, 15};
    int p;
    int *result = twoSum (numbers, 4, 9, &p);
    free(result);
    return 0;
}