class Solution {
public:
    bool isTrionic(vector<int>& nums) {

        int n = nums.size();
        int p = -1;
        int q = -1;

        for(int i =0; i<n-1; i++){
            if(nums[i] < nums[i+1]) continue;
            else {p=i; break;}
        }
        if(p<=0) return false;

        for(int i =p;i<n-1;i++){
            if(nums[i] > nums[i+1]) continue;
            else{
                q = i; break;
            }
        }

        if(q<=p) return false;

        for(int i = q; i<n-1; i++){
            if(nums[i] < nums[i+1]) continue;
            else {
                return false;
                break;
            }
        }

        return true;
    }
};


// threee pointers:
class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size(), i = 0;
        // Phase 1: Up
        while (i + 1 < n && nums[i] < nums[i + 1]) i++;
        if (i == 0 || i == n - 1) return false;
        
        int p = i;
        // Phase 2: Down
        while (i + 1 < n && nums[i] > nums[i + 1]) i++;
        if (i == p || i == n - 1) return false;
        
        // Phase 3: Up
        while (i + 1 < n && nums[i] < nums[i + 1]) i++;
        return i == n - 1;
    }
};
