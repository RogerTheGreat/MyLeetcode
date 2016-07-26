class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i = 0;
        int j = 0;
        int p = 0;
        for (i = 0; i < nums2.size(); i++) {
            for (p = 0; p < ans.size(); p++) {
                if (ans[p] == nums2[i]) {
                    break;
                }
            }
            if (p == ans.size()) {
                for (j = 0; j < nums1.size(); j++) {
                    if (nums1[j] == nums2[i]) {
                        ans.push_back(nums2[i]);
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
