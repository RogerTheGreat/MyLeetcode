// special 7

class Solution {
public:
    bool isHappy(int n) {
        int n1 = 0;
        if (n <= 0) {
            return false;
        }
        if (n == 7) {
            return true;
        }
        if (n < 10) {
            return n == 1;
        }
        while (n > 0) {
            n1 += ((n % 10) * (n % 10));
            n = n / 10;
        } 
        return isHappy(n1);
    }
};
