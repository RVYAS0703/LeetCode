class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        i=n-2 # its the last where i can have a dip. [1,2,3,4,5] observe it 4 can only chnage with 5  
        while i>=0 and nums[i]>=nums[i+1]:
            i-=1
        
        if i>=0:
            j=n-1
            while j>=0 and nums[i]>=nums[j]:
                j-=1
                
            nums[i],nums[j]=nums[j],nums[i]
            
        left=i+1
        right=n-1
        while left<right:
            nums[left],nums[right]=nums[right],nums[left]
            left+=1
            right-=1
            