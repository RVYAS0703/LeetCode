class Solution {
public:
    void transpose(vector<vector<int>>& m){
        int r=m.size();
        int c=m[0].size();
        
        for(int i=0;i<r;i++)
        {
            for(int j=i+1;j<c;j++)
            {
                swap(m[i][j],m[j][i]);
            }
        }
    }
    
    void reversed(vector<vector<int>>& m){
        for(int i=0;i<m.size();i++){
            reverse(m[i].begin(),m[i].end());
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        reversed(matrix);
    }
};