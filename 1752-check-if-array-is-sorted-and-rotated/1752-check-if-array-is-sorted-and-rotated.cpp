class Solution {
public:
    bool check(vector<int>& v)
    {
        int cnt=0;
        int n=v.size();
        for(int i=1;i<v.size();i++)
        {
            if(v[i]<v[i-1])
            {
                cnt++;
            }
        }
        if(v[n-1]>v[0])
        {
            cnt++;
        }
        
        
        return cnt<=1;
    }
};