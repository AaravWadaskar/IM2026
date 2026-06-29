class Solution(object):
    def intersection(self, nums1, nums2):
        results = []
        counts = {}
        for i, num in enumerate(nums1):
            counts.update({num : 1})
        for i, num in enumerate(nums2):
            if num in counts and num not in results:
                results.append(num)
        return results
ob = Solution()
print(ob.intersection([4, 9, 5], [9, 4, 9, 8, 4]))