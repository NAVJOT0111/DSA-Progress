        int n = nums.size();
        for(int i =0; i< n ; i++){
            int cnt = 0;

            for(int j =0; j < n; j++){
                if(nums[i] == nums[j])
                    cnt++;
            }
            if(cnt == 1)
         return nums[i];
        }
        return -1;


// for(int i : nums) ; here i is not an index but an actual elemnt 
int ans = 0;
        for(int i : nums){
            ans ^= i;
        }
  return ans;

// 3
 int mxi = nums[0];
        for(int i =0; i< n ; i++){
            if(nums[i] > mxi)
                mxi = nums[i];
        }
        vector <int> hash(mxi+ 1, 0);

        for(int i = 0; i< n; i++){
            hash[nums[i]]++;
        }
        for(int i =0; i< n; i++){
            if(hash[nums[i]] == 1)
                return nums[i];
        }
        return -1;
