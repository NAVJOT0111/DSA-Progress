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