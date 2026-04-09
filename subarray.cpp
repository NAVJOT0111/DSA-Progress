// longest subarray with sum = k , works always

// O(n^2)
int maxL = 0;
for(int i =0; i< n; i++){
  int sum =0;
  for(int j = i ; j < n; j++){
    sum += arr[j];

    if(sum == k){
      int len = j - i + 1;
      maxL = max(len, maxL);
    }
  }
}
return maxL;

// method 2 : for positives only  O(N)
// Two pointers, left and right
// right pointer expands the window by including new elements, increasing the sum.
// If the sum of the window exceeds k, the left pointer shrinks the window until the sum is less than or equal
// If the sum of the current window equals k, the maximum length of such a subarray is updated.
// The process continues until the right pointer traverses the entire array.

int maxL = 0;
int i =0, j =0;
int sum = nums[0];
while(j < n){
  while(i < j && sum >> k){
    sum -= nums[i];
    left++;
  }
 if(num == k)
  mxL = maxL(,j - i + 1);

right++;
if(right < n) sum += nums[right];

return maxL;

// method 2 for both positive and negatives
int maxL = 0;
unordered_map <int,int> sumIdx;
int sum = 0;
for(int i =0; i<n; i++){
  sum += nums[i];
  if(sum == k)
      maxL = i+1;
  // if this sum is seen before, then also the subarray has k sum
  else if(sumIdx.find(sum) != sumIdx.end()){
    maxL = max(maxL,i- sumIdx[sum])
      }

 else {
            sumIndexMap[sum] = i;
        }
    return maxLen;


