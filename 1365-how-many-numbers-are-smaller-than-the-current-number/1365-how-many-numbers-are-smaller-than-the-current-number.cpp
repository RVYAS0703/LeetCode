class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        int l=nums.size();
        vector<int>ans;
        int cnt=0;
        for(int i=0;i<l;i++)
        {
            for(int j=0;j<l;j++)
            {
                if(nums[i]>nums[j])
                    cnt++;
            }
            ans.push_back(cnt);
            cnt=0;
        }
        return ans;
    }
};