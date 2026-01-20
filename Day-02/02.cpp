class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mp;
        for(int i =0; i< nums.size(); i++){
            int key = target - nums[i];
            if(mp.count(key)){
                return {i, mp[key]} ;
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};

// Tc: O(n), Sc: O(n)

// brute force : 2 loops 
