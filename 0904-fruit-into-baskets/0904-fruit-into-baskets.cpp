class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxLen = 0;
        int n = fruits.size();

        for (int i = 0; i < n; i++) {
            set<int> st;
            for (int j = i; j < n; j++) {
                st.insert(fruits[j]);
                if (st.size() <= 2) {
                    maxLen = max(j - i + 1, maxLen);
                } else {
                    break;
                }
            }
        }
        return maxLen;
    }
};


class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int maxLen = 0;
        int n = fruits.size();
        int l =0, r=0;
        map<int, int> mp;
        
        while(r < n){
            mp[fruits[r]]++;

            if(mp.size() > 2){
                while(mp.size() > 2){
                    mp[fruits[l]]--;
                    if(mp[fruits[l]] == 0)
                            mp.erase(fruits[l]);
                    l++;
                }
            }
                maxLen = max(maxLen, r-l+1);
            r++;
        }
    return maxLen;
    }
};
