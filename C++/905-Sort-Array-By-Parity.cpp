class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int len = A.size();
        vector<int> out(len);
        for (int i = 0, begin_out = 0, end_out = len - 1; i < len; i++) {
            if (A[i] & 1) {
                out[end_out--] = A[i];
            } else {
                out[begin_out++] = A[i];
            }
        }
        return move(out);
    }
};
