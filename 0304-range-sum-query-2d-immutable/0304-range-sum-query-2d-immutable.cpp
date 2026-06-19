class NumMatrix {
public:
    vector<vector<int>> prefixsum;
    NumMatrix(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        prefixsum.resize(rows+1,vector<int>(cols+1, 0));
        for(int i=0; i<rows; ++i){
            for(int j=0; j<cols; ++j){
                prefixsum[i+1][j+1]=prefixsum[i][j+1]+prefixsum[i+1][j]-prefixsum[i][j]+matrix[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return prefixsum[row2+1][col2+1]-prefixsum[row2+1][col1]-prefixsum[row1][col2+1]+prefixsum[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */