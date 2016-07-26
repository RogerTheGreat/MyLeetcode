class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) {
            return false;
        }
        int arr[26] = {0};
        int i;
        for (i = 0; i < s.length(); i++) {
            arr[int(s[i]-'a')]++;
            arr[int(t[i]-'a')]--;
        }
        
        for (i = 0; i < 26; i++) {
            if (arr[i] != 0) {
                return false;
            }
        }
        return true;
    }
};
