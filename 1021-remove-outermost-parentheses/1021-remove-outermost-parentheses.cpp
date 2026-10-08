class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int depth = 0;

        for(char c : s){
            if(c == '('){
                if(depth > 0){
                    ans += c;
                }
                depth++;
            }
            else{
                depth--;
                if(depth > 0){
                    ans += c;
                }
            }
        }
        return ans;
    }
};


    // string res = "";
    //     stack <char> bracket;

    //     for(int i =0; i < s.length(); i++){
    //         if(s[i] == '('){
    //             if(!bracket.empty()){
    //                 res += s[i];
    //             }
    //             bracket.push(s[i]);
    //         }
    //         else{
    //             bracket.pop();
    //             if(!bracket.empty()){
    //                 res += s[i];
    //             }
    //         }
    //     }
    //     return res;