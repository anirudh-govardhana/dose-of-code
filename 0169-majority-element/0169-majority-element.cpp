class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums[0], c=0;

        for(int i=0;i<nums.size();i++){
            if(n==nums[i]) c++;
            else{
                c--;
                if(c==0){
                    n = nums[i];
                    c=1;
                }
            }
        }

        return n;
    }
};