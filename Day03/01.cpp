class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0, end = s.size()-1;
        while(st < end){
            swap(s[st],s[end]);
            st++;
            end--;
        }
    }
};

// tc,sc = O(n),O(1)
// if used stack : tc,sc = O(n),O(n)
// reverse(s.begin(), s.end()); // built in function
