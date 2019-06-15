iclass Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> out(A.size());
        for (int pn = 0, pp = A.size() - 1, pos = A.size() - 1; pn <= pp; --pos) {
            out[pos] = pow(abs(A[pn]) < abs(A[pp]) ? A[pp--] : A[pn++], 2);
        }  
        return out;
    }
};
