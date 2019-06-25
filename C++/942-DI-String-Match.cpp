class Solution {
public:
    vector<int> diStringMatch(string S) {
        int min = 0;
        int max = S.size();
        int len = max;
        vector<int> out(len+1, 0);
        for (int i = 0; i < len; i++) {
            switch(S[i]) {
            case 'I':
                out[i] = min++;
                break;
            case 'D':
                out[i] = max--;
                break;
            }
        }
        out[len] = max;
        return out;
    }
};
