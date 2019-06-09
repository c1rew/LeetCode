class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> morse_set;
        string str_morse;
        for (string &word : words) {
            unsigned len = word.length();
            for(unsigned i = 0; i < len; ++i) {
                unsigned index  = (unsigned)(word[i]-97);
                str_morse.append(morse[index]);
            }
            morse_set.insert(str_morse);
            str_morse.clear();
        }
        return morse_set.size();
    }
};
