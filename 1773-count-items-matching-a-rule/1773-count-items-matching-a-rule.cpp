class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) 
    {
        int l=items.size();
        int cnt=0;
        for (int i=0;i<l;i++)
        {
            if (ruleKey=="type")
            {
                if(items[i][0]==ruleValue)
                {
                    
                    cnt++;
                }
            }
            else if (ruleKey=="color")
            {
                
                if(items[i][1]==ruleValue)
                {
                    
                    cnt++;
                }
            }
            else if(ruleKey=="name")
            {
                if(items[i][2]==ruleValue)
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};