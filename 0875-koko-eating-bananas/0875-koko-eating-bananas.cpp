class Solution {
public:
    int findMax(vector<int>& piles){
        int n = piles.size();
        int maxi = INT_MIN;
        for(int i =0; i <n; i++){
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }

    long long hours(vector<int>& piles, int hourly){
        long long totalH = 0;
        int n = piles.size();
        for(int i =0; i <n; i++){
            // totalH += ceil((double)piles[i]/hourly);
            totalH += (piles[i] + hourly - 1) / hourly;
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = findMax(piles);

        while(left <= right){
            int mid = left + (right - left)/2;
            long long totalH = hours(piles, mid);
            if(totalH <= h){
                right = mid - 1;
            }
            else left = mid + 1;
        }

        return left;
    }
};