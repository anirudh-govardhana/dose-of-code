class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ptr = n+m-1;
        int n1 = m-1, n2 = n-1;

        while(n1>=0 && n2>=0){
            if(nums1[n1] > nums2[n2]){
                nums1[ptr] = nums1[n1];
                n1--;
            }else if(nums1[n1] < nums2[n2]){
                nums1[ptr] = nums2[n2];
                n2--;
            }else{
                nums1[ptr] = nums1[n1];
                n1--;
            }
            ptr--;
        }

        while(n2>=0){
            nums1[ptr] = nums2[n2];
            n2--;
            ptr--;
        }
    }
};