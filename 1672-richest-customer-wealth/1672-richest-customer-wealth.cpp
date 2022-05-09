class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        vector<int>Sum;
        int sum=0;
            for (int i = 0; i < accounts.size(); i++) 
            {
                for (int j = 0; j < accounts[i].size(); j++)
                {
                    
                    sum+=accounts[i][j];
                    Sum.push_back(sum);
                }
                Sum.push_back(sum);
                sum=0;
            }
        int max=*max_element(Sum.begin(), Sum.end());
        
        return max;
    }
};