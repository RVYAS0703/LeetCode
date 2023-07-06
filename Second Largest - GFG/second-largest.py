#User function Template for python3
class Solution:

	def print2largest(self,nums, n):
		# code here
		

        max_num = float('-inf')
        second_max = float('-inf')
        
        for num in nums:
            if num > max_num:
                second_max = max_num
                max_num = num
            elif num > second_max and num < max_num:
                second_max = num
        if second_max == float('-inf'):
            second_max = -1


        return second_max



#{ 
 # Driver Code Starts
#Initial Template for Python 3



if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.print2largest(arr, n)
        print(ans)
        tc -= 1

# } Driver Code Ends