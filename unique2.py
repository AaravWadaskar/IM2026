class Solution(object):
    def firstUniqChar(self, s):
        freq = {}
        for i in s:
            freq[i] = freq.get(i, 0) + 1
        for i, char in enumerate(s):
            if freq[char] == 1:
                return i
        return -1
    
ob = Solution()
ans = ob.firstUniqChar("leetcode")
print(ans)