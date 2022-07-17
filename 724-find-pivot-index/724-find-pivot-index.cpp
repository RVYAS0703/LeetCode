class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s=nums.size();
        int totals=0;
        int lefts=0;
        for(int i=0;i<s;i++)
        {
            totals=totals+nums[i];
        }
        for(int i=0;i<s;i++)
        {
            
            if(totals-lefts-nums[i]==lefts)
            {
                return i;
            }
            else
            {
                lefts+=nums[i];
            }
        }
        return -1;
    }
};