class Solution {
public:
    int romanToInt(string s) {
        int i = 0;
        int number = 0;
        int tmp = 0;
        int mi = 0;
        map<char, int> map_char;
        map_char.insert(pair<char, int>('M',1000));
        map_char.insert(pair<char, int>('D',500));
        map_char.insert(pair<char, int>('C',100));
        map_char.insert(pair<char, int>('L',50));
        map_char.insert(pair<char, int>('X',10));
        map_char.insert(pair<char, int>('V',5));
        map_char.insert(pair<char, int>('I',1));
        for (i = s.length() - 1; i >= 0; i--) {
           if (tmp > map_char[s[i]]) {
               number -= map_char[s[i]];
               tmp = 0;
           } else {
               number += map_char[s[i]];
               tmp = map_char[s[i]];
           }
        }
        return number;
    }
};
