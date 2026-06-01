class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<int> n(r,1);
        vector<int> m(c,1);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    n[i]=0;
                    m[j]=0;
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(n[i]==0 || m[j]==0){
                    matrix[i][j]=0;
                }
            }
        } 
    }
};