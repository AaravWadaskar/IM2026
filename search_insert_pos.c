int searchInsert(int* nums, int numsSize, int target) {
    int ub = numsSize - 1;
    int lb = 0;
    int mid = (ub + lb)/2;
    int pin;

    while (ub >= lb)
    {
        if (target == nums[mid])
        {
            return mid;
        }
        else if (target < nums[mid])
        {
            pin = mid;
            ub = mid - 1;
            mid = (ub + lb)/2;
        }
        else if (target > nums[mid])
        {
            pin = mid + 1;
            lb = mid + 1;
            mid = (ub + lb)/2;
        }
    }
    return pin;
}

int main (void)
{
    int arr[] = {1, 3, 5, 6};
    int ans = searchInsert(arr, 4, 3);
}