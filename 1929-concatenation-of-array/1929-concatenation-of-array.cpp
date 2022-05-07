class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        int l=n*2;
        vector<int> ans(l);
        for(int i=0;i<l;i++)
        {
            if(i<n)
            {
                ans[i]=nums[i];
            }
            else if(i>=n)
            {
               ans[i]=nums[i-n] ;
            }
        }
        return ans;
    }
};