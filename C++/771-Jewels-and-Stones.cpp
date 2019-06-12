class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int size = J.length();
        set<char> jewel_set;
        for (const char &ch : J) {
            jewel_set.insert(ch);
        }
        int count = 0;
        size = S.length();
        for (const char &ch: S) {
            if (jewel_set.count(ch)) {
                count++;
            }
        }
        return count;
    }
};
