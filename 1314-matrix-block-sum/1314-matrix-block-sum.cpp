class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
       
        int row = mat.size();
        int col = mat[0].size();
        vector<vector<int>> matrix(row, vector<int> (col, 0)) ;
        
        
        //prefix sum rowwise
        for(int i=0;i<row;i++){
            for(int j=1;j<col;j++){
                mat[i][j]+=mat[i][j-1];
            }
        }
        
        //prefix sum columnwise
        for(int j=0;j<col;j++){
            for(int i=1;i<row;i++){
                mat[i][j]+=mat[i-1][j];
            }
        }
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
               int rmax=min(row-1,i+k);
               int rmin=max(0,i-k);
               int cmax=min(col-1,j+k);
               int cmin=max(0,j-k);
                //cout<<rmax<<endl<<rmin<<endl<<cmax<<endl<<cmin<<endl;
                int area1=mat[rmax][cmax];
                int area2=0;
                if(rmin-1>=0){
                    area2=mat[rmin-1][cmax];
                }
                int area3=0;
                if(cmin-1>=0){
                    area3= mat[rmax][cmin-1];
                }
                int area4 =0;
                if(cmin-1>=0 && rmin-1>=0){
                    area4=mat[rmin-1][cmin-1];
                }
                int ans = area1-area2-area3+area4;
                matrix[i][j]=ans;
            }
        }
        return matrix;
        
    }
};