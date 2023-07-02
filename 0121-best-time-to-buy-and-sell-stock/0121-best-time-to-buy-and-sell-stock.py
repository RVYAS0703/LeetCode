class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l,r=0,1
        tmax=0
        
        while(r<len(prices)):
            if(prices[l]<prices[r]):
                profit = prices[r]-prices[l]
                tmax=max(tmax,profit)
            else:
                l=r
            r+=1
        return tmax