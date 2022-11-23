class Solution {
public:
    void moveZeroes(vector<int>& v) {
            
        int n=v.size();
        int cnt=0;
        for (auto i = v.begin(); i != v.end(); ++i) 
    {
        if (*i  == 0) {
            cnt++;
            v.erase(i);
            i--;
        }
    }
    for(int i =0;i<cnt;i++)
    {
        v.push_back(0);
    }
    
  
        
    }
};