class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        int c1=0,c2=0;
        int n1 = 0, n2=0;

        for(int n : nums){
            if(n==n1){
                c1++;
            }else if(n==n2){
                c2++;
            }else if(c1==0){
                n1 = n;
                c1 = 1;
            }else if(c2==0){
                n2=n;
                c2=1;
            }else{
                c1--;
                c2--;
            }
        }

        c1=c2=0;
        for(int n : nums){
            if(n==n1) c1++;
            else if(n==n2) c2++;
        }

        if(c1 > (int)nums.size()/3) res.push_back(n1);
        if(c2 > (int)nums.size()/3) res.push_back(n2);
 
        return res;
    }
};