class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        vector<int> res;
  int left=0,right=m[0].size();
  int top=0,bottom=m.size();

  while(top<bottom && left<right)
    {
      for(int i=left;i<right;i++){
        res.push_back(m[top][i]);
      }
      top+=1;

      for(int i=top;i<bottom;i++){
        res.push_back(m[i][right-1]);
      }

      right-=1;

      if (!(top<bottom && left<right))
      {
        break;
      }

      for(int i=right-1;i>left-1;i--){
        res.push_back(m[bottom-1][i]);
      }

      bottom-=1;

      for(int i=bottom-1;i>top-1;i--){
        res.push_back(m[i][left]);
      }

      left+=1;
    }
        
        return res;
    }
};