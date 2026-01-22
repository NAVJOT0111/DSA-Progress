class Solution {
public:
    bool isPalindrome(string s) {
        string filtered;
        for(char i : s){
            if(isalnum(i)){
                filtered += tolower(i);
            }
        }

        int left = 0, right = filtered.length()-1;

        while(left<right){
            if(filtered[left] != filtered[right]){
                return false;
            }
                left++;
                right--;            
        }
         return true;

    }
};
