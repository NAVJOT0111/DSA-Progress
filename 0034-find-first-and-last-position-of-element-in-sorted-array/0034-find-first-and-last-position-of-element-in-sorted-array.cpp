class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> result = {-1,-1};
        int l = bs(nums,target,true);
        int r = bs(nums,target,false);
        result[0] = l;
        result[1] = r;

        return result;
    }

    int bs(vector <int> &nums, int target, bool isSearchingLeft){
        int l =0;
        int r = nums.size() - 1;
        int idx = -1;

        while(l <= r){
            int m = l + (r-l)/2;

            if(nums[m] > target){
                r = m -1;
            }
            else if(nums[m] < target){
                l = m + 1;
            }
            else{
                idx = m;
                if(isSearchingLeft){
                    r = m -1;
                }
                else{
                    l = m + 1;
                }
            }
        }
        return idx;
    }
};