class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> freqMap;
        vector<int> ans(2,-1);
        for(int i=0;i<nums.size();i++){
            int element = target - nums[i];
            if(freqMap.count(element) > 0){
                ans[0] = freqMap[element];
                ans[1] = i;
                return ans;
            }
            
            freqMap[nums[i]] = i;
        }
        
        return ans;
  } 
    };
