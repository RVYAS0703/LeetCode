class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:
        while part in s:
            index = s.find(part)
            s = s[:index] + s[index+len(part):]
        return s
