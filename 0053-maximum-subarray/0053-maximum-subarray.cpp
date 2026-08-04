// Time Complexity : O(N2)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int maxim = INT_MIN;
        int ans_start = -1;
        int ans_end = -1;
        int start;

        for(int i =0; i < n; i++){

            if(sum == 0)
                 start = i;

            sum += nums[i];

            if(sum > maxim){
                maxim = sum;
                ans_start = start;
                ans_end = i;
            }

            if(sum < 0)
                sum = 0;
        }
        return maxim;
    }
};