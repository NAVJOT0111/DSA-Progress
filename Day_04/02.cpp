class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i =0; i< nums.size(); i++){
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};
// O(nlogn)


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> res(nums.size(), 0);
        if (nums.empty()) return {};


        int n = nums.size();
        int left = 0;
        int right = n-1;

        for(int i = n-1;i>=0; i++){
            if(abs(nums[left]) > abs(nums[right])){
                res[i] = nums[left] * nums[left];
                left++;
            }
            else{
                res[i] = nums[right] * nums[right];
                right--;
            }
        }
        return res;
    }
};

// this version will nort work due to the heap overflow and negative indexing due to n-1 , so trying the 3rd method, using 2 pointers in both the methods but third one has slightly different approach

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> res(nums.size(), 0);

        int idx = nums.size()-1;
        int left = 0;
        int right = nums.size()-1;

        while(left <= right){
            if(abs(nums[left]) > abs(nums[right])){
                res[idx--] = nums[left] * nums[left];
                left++;
            }
            else{
                res[idx--] = nums[right] * nums[right];
                right--;
            }
        }
        return res;
    }
};

// O(n)
