class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        frequency_map={}
        for element in nums:
            frequency_map[element] = frequency_map.get(element, 0) + 1
            
        for i in frequency_map:
            if frequency_map[i]>len(nums)/2:
                return i