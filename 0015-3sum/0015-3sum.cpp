class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n -2; i++){

            if(i >0 && nums[i] == nums[i-1])
                continue;

            int j = i + 1;
            int  k = n - 1;

            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];

                if(sum == 0){
                    ans.push_back({nums[i], nums[j], nums[k]});

                    while(j < k && nums[j] == nums[j+1]) j++;
                    while(j < k && nums[k] == nums[k -1]) k--;

// You need j < k inside those inner while loops because j and k change during those loops. outer loop guarantees j < k when the iteration starts, the inner increment (j++) and decrement (k--) change the pointer values. 

                    j++;
                    k--;
                }
                else if(sum < 0)
                    j++;
                else
                    k--;
            }
        }
 
        return ans;
    }
};


















    // vector<vector<int>> result;

    //    sort(nums.begin(),nums.end());
    //    for(int i =0; i< nums.size()-2; i++){

    //         if(i > 0 && nums[i] == nums[i-1])
    //             continue;

    //         int j = i+1;
    //         int k = nums.size()-1;
            
    //         while(j < k){
    //             int sum = nums[i] + nums[j] + nums[k];

    //             if(sum > 0){
    //                 k--;
    //             }
    //             else if(sum < 0){
    //                 j++;
    //             }
    //             else{
    //                 result.push_back({nums[i], nums[j], nums[k]});
    //                 j++;
    //                 k--;

    //                 if(nums[j] == nums[j-1]) continue;
    //                 if(nums[k] == nums[k+1]) continue;
    //             }

    //         }
    //    }
    //     return result;