class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        stack <char> bracket;

        for(int i =0; i < s.length(); i++){
            if(s[i] == '('){
                if(!bracket.empty()){
                    res += s[i];
                }
                bracket.push(s[i]);
            }
            else{
                bracket.pop();
                if(!bracket.empty()){
                    res += s[i];
                }
            }
        }
        return res;
    }
};