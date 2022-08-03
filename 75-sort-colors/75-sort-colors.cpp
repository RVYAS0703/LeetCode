class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int minIndex=i;
            for(int j=i+1;j<n;j++)
            {
                if(nums[j]<nums[minIndex])
                {
                    minIndex=j;
                }
            }
            swap(nums[minIndex],nums[i]);
        }
    }
};