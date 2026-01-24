class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxCount = 0;
        int maj_elemnt = nums[0];
        unordered_map <int,int> mp;
        for(int i : nums){
            mp[i]++;
            if(maxCount < mp[i]){
                maxCount =  mp[i];
                maj_elemnt = i;
            }
        }
    
        return maj_elemnt;
    }
};

// Time: O(n) Space: O(n)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;
        for(int x : nums){
            if(count == 0) candidate = x;
            if(x == candidate) count++;
            else count--;
        }
    
        return candidate;
    }
};

// Time: O(n) Space: O(1)
