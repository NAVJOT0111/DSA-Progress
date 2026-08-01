class Solution {

public:

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int cnt = 0;

        for(int i =0; i <nums.size(); i++){

            map <int,int> mpp;

            for(int j =i; j <nums.size(); j++){
                mpp[nums[j]]++;

                if(mpp.size() == k)
                    cnt++;

                else if(mpp.size() > k)
                    break;
            }

        }
        return cnt;
    }
};


class Solution {
public:

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmostK(nums,k) - atmostK(nums,k - 1);
    }

    int atmostK(vector <int> &nums, int k){
        int l =0, r = 0, cnt = 0;
        unordered_map<int,int> mpp;

        while(r < nums.size()){
            mpp[nums[r]]++;

            while(mpp.size() > k){
                mpp[nums[l]]--;

                if(mpp[nums[l]] == 0)
                    mpp.erase(nums[l]);
                l += 1;
            }
            cnt = cnt + (r-l+1);
            r += 1;
        }
        return cnt;
    }

};
