class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> map_num;
        int i = 0;
        for (i = 0; i < nums.size(); i++) {
            if (map_num[nums[i]] != NULL) {
                return true;
            }
            map_num[nums[i]] = 1;
        }
        return false;
    }
};
