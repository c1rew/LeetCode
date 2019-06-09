class Solution {
public:
    string toLowerCase(string str) {
        unsigned int len = str.length();
        for(unsigned i = 0; i < len; ++i) {
            char ch = str[i];
            if ((ch >= 65) && (ch <= 90)) {
                str[i]=ch+32;
            }
        }
        return str;
    }
};
