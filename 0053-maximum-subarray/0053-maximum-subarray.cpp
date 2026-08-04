// Time Complexity : O(N2)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = INT_MIN;

        for (int i = 0; i < n; i++) {
            int sum1 = 0;

            for (int j = i; j < n; j++) {
                sum1 += nums[j];
                sum = max(sum, sum1);
            }
        }

        return sum;
    }
};

// brute : O(n3)

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
