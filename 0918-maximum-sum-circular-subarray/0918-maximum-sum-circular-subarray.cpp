class Solution {
public:

    int kadaneMax(vector<int>& nums, int n){
        int sum = nums[0];
        int maxSum = nums[0];

        for(int i =1; i <n; i++){
            sum = max(sum + nums[i], nums[i]);
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }

    int kadaneMin(vector<int>& nums, int n){
        int sum = nums[0];
        int minSum = nums[0];

        for(int i =1; i <n; i++){
            sum = min(sum + nums[i], nums[i]);   
            minSum = min(minSum, sum);
        }
        return minSum;
    }

    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        
        int sum = accumulate(begin(nums), end(nums), 0);
        int minSum = kadaneMin(nums,n);
        int maxSum = kadaneMax(nums,n);
        int circularSum = sum - minSum;

        if(maxSum > 0){
            return max(maxSum, circularSum);
        }
        return maxSum;
    }
};