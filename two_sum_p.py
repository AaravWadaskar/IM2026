class Solution(object):
    def twoSum(nums, target):
        seen = {}
        
        for i, num in enumerate(nums):
            comp = target - num;
            if comp in seen:
                return [seen[comp], i]
            seen[num] = i
        return []
        
    test_cards = [4, 3, 6]
    test_target = 10
    print(twoSum(test_cards, test_target))