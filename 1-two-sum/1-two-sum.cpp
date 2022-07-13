class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        // int p1=nums[0];
        // int p2=nums[p1+1];
        // sort(nums.begin(),nums.end());
        vector<int> v1;
        for(int i=0;i<nums.size();i++)
        {
            int p2=target-nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                if(p2==nums[j])
                {
                    v1.push_back(i);
                    v1.push_back(j);
                }
            }
        }
        return v1;
    }
};