class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        hset=set()        
        for i in nums:
            if i in hset:
                return True
            hset.add(i)
        return False
        