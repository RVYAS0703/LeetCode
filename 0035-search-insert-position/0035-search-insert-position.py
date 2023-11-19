class Solution(object):
    def searchInsert(self, arr, x):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        n=len(arr)
        l,h,ans=0,n-1,n
        while l<=h:
            m=(l+h)//2
            if arr[m]>=x:
                ans=m
                h=m-1
            else:
                l=m+1
        return ans
        