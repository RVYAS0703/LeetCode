class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<pair<int, int>> zeros;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(matrix[i][j] == 0){
                zeros.push_back({i, j});
            }
        }
    }
    for(pair<int, int> p : zeros){
        for(int i = 0; i < cols; i++){
            matrix[p.first][i] = 0;
        }
        for(int i = 0; i < rows; i++){
            matrix[i][p.second] = 0;
        }
    }
}

};