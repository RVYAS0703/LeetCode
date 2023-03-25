class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hashSet;
        for(int n:nums){
            hashSet.insert(n);
        }
        
        int umax=0;
        
        for(int n:nums){
            if(!hashSet.count(n-1)){
                int maxx=1;
                
                
                while(hashSet.count(n+1)){
                    maxx++;
                    n++;
                }
                umax=max(umax,maxx);
            }
            
        }
        
        return umax;
    }
};