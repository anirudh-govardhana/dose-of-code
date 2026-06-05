class Solution {
public:

    bool binSearch(vector<int> &m, int st, int end, int target){
        while(st<=end){
            int mid = st+(end-st)/2;
            if(m[mid]==target) return true;
            else if(m[mid]>target) end = mid-1;
            else st = mid+1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i=0;i<m;i++){
            if(matrix[i][0] <= target && target <= matrix[i][n-1]){
                return binSearch(matrix[i], 0, n-1, target);
            }
        }
        return false;
    }
};