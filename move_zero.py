class Solution(object):
    def moveZeroes(nums):
        write = 0
        for i in range(len(nums)):
            if nums[i] != 0:
                t = nums[write]
                nums[write] = nums[i]
                nums[i] = t
                write += 1
    
    num = [0, 1, 0, 3, 12]
    moveZeroes(num)
    print(num)