class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int st=0, end=n*m-1;

        while(st<=end){
            int mid = st+(end-st)/2;
            int val = matrix[mid/n][mid%n];
            if(val==target) return true;
            else if(val>target) end = mid-1;
            else st = mid+1;
        }
        return false;
    }
};