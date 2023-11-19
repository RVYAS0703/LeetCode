class Solution(object):
    def search(self, arr, x):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        l,h=0,len(arr)-1
        while l<=h:
            mid=(l+h)//2
            
            if arr[mid]==x:
                return mid
            elif arr[mid]>x:
                h=mid-1
            elif arr[mid]<x:
                l=mid+1
        return -1
    