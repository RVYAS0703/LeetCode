class Solution {
public:
    int removeDuplicates(vector<int>& v) {
          int n=v.size();
        v.push_back(v[0]);
        for(int i=0;i<n-1;i++)
        {
            if(v[i]!=v[i+1])
            {
                v.push_back(v[i+1]);
            }
        }
        v.erase(v.begin(),v.begin()+n);
      
        return (v.size());
    }
};