class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxLen =0;
        for(int i =0; i< nums.size(); i++){
            int zeros = 0;
            for(int j =i; j < nums.size(); j++){
                if(nums[j] == 0){
                    zeros++; 
                }
                
                if(zeros <= k){
                    maxLen = max(maxLen, j-i+1);
                }
                else{
                    break;
                }
            }
        }
        return maxLen;
    }
};
// O(n2)


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxLen =0;
        int l = 0, r =0, zeroes = 0;
        while(r < nums.size()){
            if(nums[r]==0) zeroes++;
            while(zeroes > k){
                if(nums[l] == 0){
                    zeroes--;
                   
                }  l++;
            }
            if(zeroes <= k){
                int len = r-l+1;
                maxLen = max(len,maxLen);
            }
            r++;
        }
        return maxLen;
    }
};
// O(2n)

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxLen =0;
        int l = 0, r = 0, zeroes = 0;
        while(r < nums.size()){
            if(nums[r] == 0) zeroes++;
            if(zeroes > k){
                if(nums[l] == 0) zeroes--;
                l++;
            }
            if(zeroes <= k){
                int len = r-l+1;
                maxLen = max(len, maxLen);
            }
            r++;
        }
        return maxLen;
    }
};
