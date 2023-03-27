class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
  int k=v.size()/3;
  unordered_map<int, int> mp;
  for (int i:v){
    mp[i]++;
  }
  v.clear();
  for(auto it = mp.begin(); it != mp.end(); it++){
    if(it->second > k){
      v.push_back(it->first);
    }
  
  }
        
        return v;
    }
};