class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        l=list(sentence)
        s=set(l)
        l=list(s)
        le=len(l)
        if le>=26:
            return True
        else:
            return False