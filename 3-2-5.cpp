class Solution {
public:
    bool isArmstrong(int n) {
        int copy = n;
        if (n == 0) return 1;
        int digit = log10(n) + 1;
        int arm_no = 0;
        while(n){
            int x = n % 10;
            arm_no += power(x, digit);
            x /= 10;
        }
    return arm_no == copy;
    }
};
