class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n / 2 != 0 || n == 1) {
            if (n == 1) {
                count++;
                break;
            }
            if (n % 2 == 1) {
                count++;
                n = (n - 1) / 2;
            } else {
                n = n / 2;
            }
        }
        return count;
    }
};
