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



class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();
        for(int i =0; i < n; i ++){
            int sum = 0;
            for(int j = i; j <n; j++){
                sum += nums[j];

                if((j-i+1) >= 2 && sum%k == 0)
                    return true;
            }
        }
        return false;
    }
};                             



// not valid for 0 or -ve values class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();

        int sum = 0;
        mp[0] = -1;    // remainder 0 is first seen before the start of the array

        for(int i =0; i < n; i++){
            sum += nums[i];

            if(k != 0)
                sum %= k;

            if(mp.count(sum)){
                if(i - sum > 1){
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

