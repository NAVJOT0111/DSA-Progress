class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int maxSum = abs(nums[0]);
        int sum = nums[0];

        for(int i =1; i < n; i++){
            
            sum = max(sum + nums[i], nums[i]);
            maxSum = max(maxSum, abs(sum));
            
        }
        sum = nums[0];

        for(int i =1; i < n; i++){
            
            sum = min(sum + nums[i], nums[i]);
            maxSum = max(maxSum, abs(sum));

        }
        return maxSum;
    }
};