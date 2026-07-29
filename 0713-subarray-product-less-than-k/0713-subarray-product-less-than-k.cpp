class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int l =0,r=0;
        int prod = 1;

         if (k <= 1) return 0;
        while(r<n){

           prod *= nums[r];

           while(prod >= k){ 
            prod /= nums[l];
            l++;
           }
           count += r-l+1;
           r++;
           
           
        }
        return count;
    }
};

