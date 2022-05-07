class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int l=nums.size();
        std::vector<int> ans(l);
        
        
        for(int i=0;i<l;i++)
        {
            ans[i]=nums[nums[i]];
        }
        return ans;
        
    }
};