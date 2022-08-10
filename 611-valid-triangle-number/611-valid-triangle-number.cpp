class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        if(n<3){return ans;}
        
        sort(nums.begin(),nums.end());
        
        for(int i=2;i<n;i++)
        {
            int left=0,right=i-1;
            
            while(left<right)
            {
                if(nums[right]+nums[left]>nums[i])
                {
                    ans+=(right-left);
                    right--;
                }
                
                else
                {
                    left++;
                }
            }
        }
        return ans;
        
    }
};