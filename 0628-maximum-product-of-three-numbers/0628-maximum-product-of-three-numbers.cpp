class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int max_prod1 = nums[n-1]*nums[n-2]*nums[n-3];
        int max_prod2 = nums[0]*nums[1]*nums[n-1];
        return max(max_prod1,max_prod2);
    }
};