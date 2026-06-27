class Solution(object):
    def isAnagram(s, t):
        s = s.lower()
        t = t.lower()

        if(len(s) != len(t)):
            return False
        alph = [0] * 26
        for i in range(len(s)):
            j = ord(s[i]) - 97
            alph[j] += 1
            h = ord(t[i]) - 97
            alph[h] -= 1
        
        if alph.count(0) == len(alph):
            return True
        return False
    
    n1 = "anagram"
    n2 = "nagaram"

    ans = isAnagram(n1, n2)
    print(ans)

        