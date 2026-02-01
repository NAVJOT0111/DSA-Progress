class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i =0;
        int first = 0;
        int n = nums.size();
        int last = n-1;

        while(i<=last){
            if (nums[i] == 0) {
                swap(nums[i],nums[first]);
                first++;
                i++;
            }
            else if(nums[i] == 2){
                
                swap(nums[i],nums[last]);
                last--;
            } 
           else i++;
        }
    }
};
