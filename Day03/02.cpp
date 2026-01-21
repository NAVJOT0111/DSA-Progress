class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int st = 0, end = nums.size();
        while(st < end){
            if( nums[st] ==val){
                swap(nums[st],nums[end-1]);
                
                end--;  // shrink range
            }
            else{
                st++;   // move foreward
            }
        }
        return end;
    }
};

// Time: O(n), Space: O(1)


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
  
        auto it = remove(nums.begin(), nums.end(), val);
        return (it - nums.begin()) ;
    }
};

// Time: O(n), Space: O(1)
