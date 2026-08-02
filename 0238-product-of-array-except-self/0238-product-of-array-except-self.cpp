class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);

        for(int i = 0; i < n; i++){
            int prod = 1;

            for(int j = 0; j < n; j++){
                if(i == j) continue;
                prod *= nums[i];
            }
            ans[i] = prod;
        }
        return ans;
    }
};


// Dividing the product of array with the number :  one major con in going with this method is when we have an element as 0 in our array
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int prod = 1;

        for(int i = 0; i < n; i++){
            prod *= nums[i];
        }

        for(int i = 0; i < n; i++){
            ans[i] = prod / nums[i];
        }
        
        return ans;
    }
};



// it takes more auxiliary space
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> pre(n);
        vector<int> suff(n);
        vector<int> ans(n);

        pre[0] = 1;
        suff[n-1] = 1;

        for(int i = 1; i < n; i++){
            pre[i] = pre[i-1] * nums[i-1];
        }

        for(int i = n-2; i >= 0; i--){
            suff[i] = suff[i+1] * nums[i+1];
        }

        for(int i = 0; i < n; i++){
            ans[i] = pre[i] * suff[i];
        }

        return ans;
    }
};



class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n,1);

        int curr = 1;

        // store prefix products
        for(int i = 0; i < n; i++){
            ans[i] *= curr;
            curr *= nums[i];
        }

    curr = 1;
        // multiply suffix products
        for(int i = n-1 ; i >= 0; i--){
            ans[i] *= curr;
            curr *= nums[i];
        }

        return ans;
    }
};
