class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> matrix;
        for(int i=0;i<numRows;i++){
            vector<int> v(i+1);
            for(int j=0;j<=i;j++){
                if(j==0 || j==i) v[j]=1;
                else v[j] = matrix[i-1][j-1] + matrix[i-1][j];
            }
            matrix.push_back(v);
        }
        return matrix;
    }
};