// class Solution {
// public:
//     int shipWithinDays(vector<int>& weights, int days) {
//         int n = weights.size();
//         int low = *max_element(weights.begin(), weights.end());
//         int high = accumulate(weights.begin(), weights.end(), 0);

//         for(int capacity = low;capacity <= high; capacity++){
//             int daysReq = 1, load = 0;

//             for(int x : weights){
//                 if(load + x > capacity){
//                     daysReq++;
//                     load = x;
//                 }
//                 else
//                     load += x;
//             }
//             if(daysReq <= days){
//                 return capacity;
//             }
//         }
//         return -1;
//     }
// };

class Solution {
public:
    int findDays(vector<int>& weights, int capacity){
        int days = 1, load = 0;
        for(int x : weights){
            if(load + x > capacity){
                days++;
                load = x;
            }
            else
                load += x;
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while(low <= high){
            int mid = low + (high - low)/2;
            int daysreq = findDays(weights, mid);
            if(daysreq <= days){
                high = mid -1;
            }
            else
                low = mid + 1;
        }
        return low;
    }
};