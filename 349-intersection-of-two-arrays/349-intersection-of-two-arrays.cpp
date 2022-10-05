class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        unordered_set<int> v;
    vector<int>v1;
    for(int i=0;i<a.size();i++)
    {
        v.insert(a[i]);
    }
    
    for(int i=0;i<b.size();i++)
    {
        if(v.find(b[i]) != v.end())
        {
            v1.push_back(b[i]);
            v.erase(b[i]);
        }
    }
    return v1;
    }
};