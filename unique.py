class Solution(object):
    def firstUniqChar(self, s):
        s = s.lower()
        arr = [0] * 26
        for c in s:
            i = ord(c) - 97
            arr[i] += 1
        
        for i, c in enumerate(s):
            if arr[ord(c) - 97] == 1:
                return i
        
        return -1
    
ob = Solution()
ans = ob.firstUniqChar("leetcode")
print(ans)