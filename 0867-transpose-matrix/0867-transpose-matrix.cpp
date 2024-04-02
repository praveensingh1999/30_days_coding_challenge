class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
         int row = matrix.size();
         int col= matrix[0].size();
        vector<vector<int>>ans(col, vector<int>(row));
         for(int i=0;i<row;i++){
             for(int j=0;j<col;j++){
                 ans[j][i]=matrix[i][j];
            }
         }
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                cout<<ans[i][j];
            }
            cout<<endl;
        }
        return ans;
        
    }
};