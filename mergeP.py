class Solution(object):
    def merge(nums1, m, nums2, n):
        j = m+n-1
        for i in range(0, n):
            nums1[j] = nums2[i]
            j = j-1
        nums1.sort()

    num1 = [1, 2, 3, 0, 0, 0]
    num2 = [2, 5, 6]

    merge(num1, 3, num2, 3)
    print(num1)
