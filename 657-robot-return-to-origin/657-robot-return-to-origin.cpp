class Solution {
public:
    bool judgeCircle(string s) {
        unordered_map<char,int> m;
      
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        
            if(m['U']==m['D']  &&  m['L']==m['R'])
            {
                return true;
            }
            else
            {
                return false;
            }
    }
};




