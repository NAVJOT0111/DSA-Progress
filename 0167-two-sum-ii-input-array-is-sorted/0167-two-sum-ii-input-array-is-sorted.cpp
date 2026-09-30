class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0;
        int j = n-1;

        for(int k = 0; k < n; k++){
            if((numbers[i] + numbers[j]) == target){
                return {i+1,j+1};
            }
            else if((numbers[i] + numbers[j]) < target){
                i++;
            }
            else{
                j--;
            }
        }
        return {};
    }
};


//         int i = 0;
//         int j = numbers.size() -1 ;

//         while(i < j){
//         if(numbers[i]+numbers[j] == target){
//             return {i+1,j+1};
//         }
//         else if (numbers[i]+numbers[j] < target){
//             i++;
//         }
//         else if (numbers[i]+numbers[j] > target){
//             j--;
//         }
//         }
//         return {};