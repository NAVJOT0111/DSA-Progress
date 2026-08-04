  brute force : o(n3)  this one is for O(n2): class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;

        for(int i =0; i < n; i++){
            int sum = 0;
            for(int j = i ; j < n; j++){
                sum += nums[j];
                if(sum % k == 0)
                    cnt++;
            }
            
        }
        return cnt;
    }
};




class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        int n = nums.size();
        unordered_map<int,int> mp;
        int sum = 0;

        mp[0] = 1;
        int cnt = 0;

        for(int j = 0 ; j < n; j++){
            sum += nums[j];

            int rem = sum % k;
            if(rem < 0)
                rem += k;

            if(mp.find(rem) != mp.end())
                cnt += mp[rem];
            
            mp[rem]++;
        }
        
        return cnt;
    }
};
