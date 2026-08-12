class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        reverse(nums.begin(), nums.end());

        reverse(nums.begin(), nums.begin() + k);

        reverse(nums.begin()+ k, nums.end());
    }
};


// vector <int> rotated(n);
//         for(int i =0; i<n; i++){
//             rotated[(i+k)%n] = nums[i];
//         }
//         nums = rotated;

// For every rotation:
// Save the last element.
// Shift every element one position right.
// Put the saved element at index 0.

        // k = k % n;
        // for(int j = 0; j < k; j++){
        //     int last = nums[n - 1];

        //     for(int i = n - 1; i > 0; i--){
        //         nums[i] = nums[i - 1];
        //     }
        //     nums[0] = last;
        // }