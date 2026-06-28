class Solution(object):
    def reverseString(s):
        lef = 0
        rit = len(s) - 1
        
        while lef <= rit:
            t = s[lef]
            s[lef] = s[rit]
            s[rit] = t
            lef += 1
            rit -= 1

    str = list("Hello")
    reverseString(str)
    print(str)