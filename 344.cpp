class Solution {
public:
    string reverseString(string s) {
        string a = s;
        reverse(a.begin(), a.end());
        return a;
    }
};
