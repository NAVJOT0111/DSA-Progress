class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        for(int i =0; i < nums.size(); i++){
            int leftSum = 0;

            for(int j = 0 ; j< i; j++)
                leftSum += nums[j];
            
            int rightSum = 0;
            for(int k = i+1; k< nums.size(); k++)
                rightSum += nums[k];

            if(leftSum == rightSum)
                return i;
        }
        return -1;
    }
};

class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int total = 0;
        for(int x : nums)
            total += x;

        int l_sum = 0;
        
        for(int i =0; i < nums.size(); i++){
            
            int r_sum = total - l_sum - nums[i];

            if(l_sum == r_sum)
                return i;
            l_sum += nums[i];
           
        }
        return -1;
    }
};
