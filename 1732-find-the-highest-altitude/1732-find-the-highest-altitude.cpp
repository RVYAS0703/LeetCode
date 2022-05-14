class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        vector<int> ans(gain.size()+1);
         ans[0]=0;
        for(int i=1;i<gain.size()+1;i++)
        {
           
          ans[i]=ans[i-1]+gain[i-1];
        }
        
        int max=*max_element(ans.begin(), ans.end()); 
        return max;
    }
};