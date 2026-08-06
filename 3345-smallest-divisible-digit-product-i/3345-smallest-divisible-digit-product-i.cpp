class Solution {
public:
    int digProd(int x){
            int prod = 1;

            while(x > 0){
                int digit = x % 10;

                if(digit == 0)
                    return 0;
                prod *= digit;
                x /= 10;
            }
            return prod;
        }
    int smallestNumber(int n, int t) {

        while(true){
            if(digProd(n) % t == 0){
                return n;
            }
            n++;
        }
    }
};