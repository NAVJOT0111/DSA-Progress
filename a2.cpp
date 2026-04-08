#include <bits/stdc++.h>
using namespace std;

// Define the Solution class
class Solution {
public:

  vector <int> unionList(int arr1[], int arr2[], int n, int m){

    // // solution 1
    // map<int,int> freq;
    // vector <int> union_l;
    // for(int i =0; i<n; i++){
    //     freq[arr1[i]]++;
    // }
    // for(int i =0; i < m; i++){
    //     freq[arr2[i]]++;
    // }
    // for(auto &it: freq)
    //     union_l.push_back(it.first);

    vector <int> union_l;
    int i =0, j = 0;
    while(i <n && j < m){
        if(arr1[i] < arr2[j]){
            if(union_l.empty() || union_l.back() != arr1[i]){
                union_l.push_back(arr1[i]);
            } i++;
        }

        else if(arr2[j] < arr1[i]){
            if(union_l.empty() || union_l.back() != arr2[j]){
                union_l.push_back(arr2[j]);
            }j++;
        }

        else{
            if (union_l.empty() || union_l.back() != arr1[i])
                union_l.push_back(arr1[i]);
            i++; j++;
        }
    }
    while (i < n) {
            if (union_l.empty() || union_l.back() != arr1[i])
                union_l.push_back(arr1[i]);
            i++;
        }
    while (j < m) {
            if (union_l.empty() || union_l.back() != arr2[j])
                union_l.push_back(arr2[j]);
            j++;
        }

    return union_l;
  }
};
