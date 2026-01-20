// Brute force : O(n^2)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1])
                return true;
        }
        return false;
    }
};

// tc, sc : O(nlogn), O(1)


 unordered_set <int> s;
        for(int x : nums){
            if(s.count(x) == 1)  return true;
            else s.insert(x);
        }
        return false;
// tc, sc : O(n), O(n)


unordered_map <int,int> s;
        for(int x : nums){
            s[x]++;
            if(s[x] > 1) return true;
        }
        return false;
// tc, sc : O(n), O(n)
