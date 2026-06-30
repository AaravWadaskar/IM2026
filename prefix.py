class Solution(object):
    def longestCommonPrefix(self, strs):
        base = strs[0]
        ans = ""
        for i in range(len(base)):
            for st in strs:
                if i == len(st):
                    return ans
                if base[i] != st[i]:
                    return ans
            ans = ans + base[i]
        return ans
    
ob = Solution()
list = ["flower","flow","flight"]
print(ob.longestCommonPrefix(list))