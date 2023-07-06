class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        result = reduce(lambda x, y: x ^ y, nums)
        return result