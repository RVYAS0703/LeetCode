class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        map={}        
        for i in nums:
            map[i]=1+map.get(i,0)
        for m in map:
            if map[m] > 1:
                return True
        return False