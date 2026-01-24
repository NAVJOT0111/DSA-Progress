class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string q = "";
        sort(strs.begin(),strs.end());
        string  first = strs[0];
        string  last = strs[strs.size()-1];

        if (strs.empty()) return "";

        for(int i =0; i< min(first.size(), last.size()); i++){
            if(first[i] != last[i]){
                return q;
            }
            q += first[i];
        }
        return q;
    }
};
// tc: O(nlogn + m)

