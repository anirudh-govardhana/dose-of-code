class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int n=nums.size();
       vector<bool> v(n+1, false);

        for(int num : nums){
            if(v[num]) return num;
            v[num]=true;
        }
        return -1;
    }
};