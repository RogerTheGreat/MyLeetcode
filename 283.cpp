class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int number = 0;
        for ( ; i<nums.size()&&number<=nums.size(); i++) {
            if (nums[i] == 0) {
                int j = 0;
                int tmp = 0;
                for (j=i; j<nums.size()-1; j++) {
                    nums[j] = nums[j+1];
                }
                nums[j] = 0;
                i--;
                number++;
            }
        }
    }
};
