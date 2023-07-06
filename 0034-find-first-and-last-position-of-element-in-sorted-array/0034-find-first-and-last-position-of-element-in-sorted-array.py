class Solution(object):
    
    
    
    def binaryM(self,li,t,leftBias):
        l,r=0,len(li)-1
        i= -1

        while l<=r:
            m=l+(r-l)//2
            if t>li[m]:
                l=m+1
            elif t<li[m]:
                r=m-1
            else:
                i=m
                if leftBias:
                    r=m-1
                else:
                    l=m+1
        return i


    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        left = self.binaryM(nums,target,True)
        right =self.binaryM(nums,target,False)
        return [left,right]