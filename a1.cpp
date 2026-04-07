#include <bits/stdc++.h>
using namespace std;

// for one element roattion
int main(){
    int temp[n];
    for(int i =0; i< n; i++){
      temp[i] = nums[i+1];
      temp[n-1] = arr[0];
    }

//swapping adjacent elemnts in a loop

// for n rotations
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector <int> rotated(n);
        for(int i =0; i<n; i++){
            rotated[(i+k)%n] = nums[i];
        }
        nums = rotated;
    }
};
