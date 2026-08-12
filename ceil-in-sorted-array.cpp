class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int l = 0; int h = arr.size() -  1; int ans = -1;
        
        while(l <= h){
            int m = l + (h - l)/2;
            
            if(arr[m] >= x){
                ans = m;
                h = m - 1;
            }
            else l = m + 1;
        }
        return ans;
    }
};
