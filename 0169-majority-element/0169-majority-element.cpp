class Solution {
public:
    int majorityElement(vector<int>& v) {
        int res=0;
         int n=v.size();
    n=n/2;
         map<int,int> m;
        for(int i=0;i<v.size();i++)
        {
            if(m.find(v[i])==m.end())
            {
                m[v[i]]=1;
            }
            else
            {
                m[v[i]]++;
            }
        }
        
        for(auto & i:m)
        {
            if(i.second>n)
            {
              
              res=i.first;
            }
        }
        
        return (res);
    }
    
};