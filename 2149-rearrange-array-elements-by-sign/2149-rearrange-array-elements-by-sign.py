class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        ans = [0] * len(nums)  # Create an initial list with the same length as nums
        negi = 1
        posi = 0
        for i in range(len(nums)):
            if nums[i] < 0:
                ans[negi] = nums[i]
                negi += 2
            else:
                ans[posi] = nums[i]
                posi += 2
        return ans
