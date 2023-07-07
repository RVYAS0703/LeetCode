class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        pos=[]
        neg=[]
        for n in nums:
            if n<0:
                neg.append(n)
            else:
                pos.append(n)
        ans=[]
        for a,b in zip(pos,neg):
            ans.append(a)
            ans.append(b)
        return ans