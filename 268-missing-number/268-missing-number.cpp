class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        int Esum=n*(n+1)/2;
        int actuals=0;
        
        for(int i=0;i<n;i++)
        {
            actuals=actuals+nums[i];
        }
        return Esum-actuals;
    }
};