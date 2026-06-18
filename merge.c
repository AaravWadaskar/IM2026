void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int p1 = m - 1;
    int p2 = n - 1;
    int p = nums1Size - 1;

    while(p2 >= 0)
    {
        if(p1 < 0)
        {
            nums1[p] = nums2[p2];
            p2--;
            p--;
        }
        else if(nums1[p1] > nums2[p2])
        {
            nums1[p] = nums1[p1];
            p1 = p1 - 1;
            p = p - 1;
        }
        else if(nums1[p1] < nums2[p2])
        {
            nums1[p] = nums2[p2];
            p2 = p2 - 1;
            p = p - 1;
        }
        else
        {
            nums1[p] = nums2[p2];
            p--;
            p2--;
            nums1[p] = nums1[p1];
            p1--;
            p--;
        }
    }
}

int main(void)
{
    int arr1[] = {3, 5, 8, 0, 0, 0};
    int arr2[] = {1, 2, 17};
    merge(arr1, 6, 3, arr2, 3, 3);
    return 1;
}