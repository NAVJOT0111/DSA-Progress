class Solution {
  public:
  
  bool canWePlace(vector<int> &arr, int k, int dist){
      int cows = 1;
      int lastCow = arr[0];
      for(int x : arr){
          if(x - lastCow >= dist){
              cows ++;
              lastCow = x;
          }
          if(cows>= k)
            return true;
  } 
  
        return false;
      }
      
  
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        int n =  arr.size();
        int maxDist = arr[n-1] - arr[0];
        int ans = 0;
        for(int dist = 1; dist <= maxDist; dist++){
            if(canWePlace(arr,k,dist)){
                ans = dist;
            }
            else 
                break;
        }
        return ans;
    }
    
};


class Solution {
  public:
  
  bool canWePlace(vector<int> &arr, int k, int dist){
      int cows = 1;
      int lastCow = arr[0];
      for(int x : arr){
          if(x - lastCow >= dist){
              cows ++;
              lastCow = x;
          }
          if(cows>= k)
            return true;
  } 
  
        return false;
      }
      
  
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        int n =  arr.size();
        int low  = 1;
        int high = arr[n-1] - arr[0];
        int ans = 0;
       
        while(low <= high){
           int mid = low + (high - low)/2;
           
           if(canWePlace(arr,k,mid)){
               ans = mid;
               low = mid + 1; // try for a larger ans 
           }
           else
                high = mid -1;
       }
       return ans;
    }
};
