// it'll give TLE

class Solution {
public:

    int solve(vector<int>& stoneValue, int i){
        int n = stoneValue.size();

        vector<int> t;   // instead of starting the recursive funct again everytime, store the values in a dp array
        if(i >= n) return 0;

        if(t[i] != -1)
            return t[i];

        int result = stoneValue[i] - solve(stoneValue, i+1);

        if(i+1 < n)
            result = max(result, stoneValue[i] + stoneValue[i+1] - solve(stoneValue, i+2));
        if(i+2 < n)
            result = max(result, stoneValue[i] + stoneValue[i+1] + stoneValue[i+2] - solve(stoneValue, i+3));

        return return t[i] = result;
    }

    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();
        t.resize(n+1, -1); 

        int diff = solve(stoneValue,0);

        if(diff < 0)
            return "Bob";
        else if(diff > 0)
            return "Alice";
        return "Tie";
    }
};                                                       



// O(n) time and space
class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();
        vector<int> t(n+1);

        for(int i = n -1; i >= 0; i--){

            t[i] = stoneValue[i] - t[i+1];

            if(i+2 <= n)
                t[i] = max(t[i], stoneValue[i] + stoneValue[i+1] - t[i+2]);
            if(i+3 <= n)
                t[i] = max(t[i], stoneValue[i] + stoneValue[i+1] + stoneValue[i+2] - t[i+3]);
        }

        int diff = t[0];

        if(diff < 0)
            return "Bob";
        else if(diff > 0)
            return "Alice";
        return "Tie";
    }
};




// O(n) with O(1) space
class Solution {
public:

    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();

        int a = 0;
        int b = 0;
        int c = 0;

        for(int i = n -1; i >= 0; i--){
            int result = INT_MIN;

            result = max(result, stoneValue[i] - a);

            if(i+2 <= n)
                result = max(result, stoneValue[i] + stoneValue[i+1] - b);
            if(i+3 <= n)
                result = max(result, stoneValue[i] + stoneValue[i+1] + stoneValue[i+2] - c);

            c = b;
            b = a;
            a = result;
        }

        int diff = a;

        if(diff < 0)
            return "Bob";
        else if(diff > 0)
            return "Alice";
        return "Tie";
    }
};
