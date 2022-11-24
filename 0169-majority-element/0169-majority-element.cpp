class Solution {
public:
    int majorityElement(vector<int>& v) {
         sort(v.begin(),v.end());
         int n=v.size();
        return v[(n-1)/2];
         
    }
};