class Solution:
    def firstUniqChar(self, s: str) -> int:
        m={}
        for i in range(len(s)):
            if s[i] in m:
                m[s[i]]+=1
            else:
                m[s[i]]=1
        for i in range(len(s)):
            if m[s[i]]==1:
                return i
        return -1