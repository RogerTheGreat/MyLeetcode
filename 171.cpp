class Solution {
public:
    int titleToNumber(string s) {
        int page = 0;
        int i;
        for (i = 0; i < s.length(); i++) {
            page *= 26;
            page += s[i] - 'A' + 1;
        }
        return page;
    }
};
