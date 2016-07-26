class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        int major = size / 2 + 1;
        int i = 0;
        map<int,int> map_num;
        for (i = 0; i < nums.size(); i++) {
            if (map_num[nums[i]] != NULL) {
                map_num[nums[i]]++;
            } else {
                map_num[nums[i]] = 1;
            }
            
            if (map_num[nums[i]] >= major) {
                return nums[i];
            }
        }
        return -1;
    }
};
