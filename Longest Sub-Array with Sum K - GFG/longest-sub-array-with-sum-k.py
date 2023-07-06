#User function Template for python3

class Solution:
    def lenOfLongSubarr (self, l, n, k) : 
        #Complete the function
        Map={}
        Sum,mlen=0,0
        for i in range(len(l)):
            Sum+=l[i]
            if Sum == k:
                mlen=max(mlen,i+1)
            rem = Sum-k 
            
            if rem in Map:
                length=i-Map[rem]
                mlen=max(mlen,length)
            
            if Sum not in Map:
                Map[Sum]=i
        return mlen



#{ 
 # Driver Code Starts
#Initial Template for Python 3


for _ in range(0,int(input())):
    
    n, k = map(int , input().split())
    arr = list(map(int,input().strip().split()))
    ob = Solution()
    print(ob.lenOfLongSubarr(arr, n, k))




# } Driver Code Ends