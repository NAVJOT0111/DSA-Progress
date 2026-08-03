class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();

        int sum = 0;
        mp[0] = -1;    // remainder 0 is first seen before the start of the array

        for(int i =0; i < n; i++){
            sum += nums[i];

            if(k != 0)
                sum = sum % k;

            if(mp.count(sum)){
                if(i - mp[sum] > 1){
                    return true;
                }
            }
            else{
                    mp[sum] = i;
                }
        }
        
        return false;
    }
};