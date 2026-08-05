//https://chatgpt.com/c/6a73313f-6468-83e8-a498-3c8a7a01d553
class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int maxSum = nums[0];

        for(int i =0; i < n; i++){
            int sum = 0;
            for(int j = i; j < n; j++){
                sum += nums[j];
                maxSum = max(maxSum, abs(sum));
            }
        }
        return maxSum;
    }
};

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
