class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>v1;
        int n=nums.size();
        vector<int>v(n,0);
        for(int i=0;i<n;i++)
        {
            v[nums[i]-1]=1;
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                v1.push_back(i+1);
            }
        }
        return v1;
    }
};