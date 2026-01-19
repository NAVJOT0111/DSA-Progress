class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0; 
        while(i< nums.size()-1){
            if(nums[i] == nums[i+1]){
                i += 2;
            } 
            else{
                return nums[i];
            }
        }
        return nums[i];
    }
};
// tc : O(nlogn), sc : O(1)

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int ans = 0;
//         for(int x : nums){
//             ans ^= x;
//         }
//         return ans;
//     }
// };
// tc, sc = O(n), O(1)
