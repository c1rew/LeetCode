class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x^y;
        unsigned int c =0;
        for (c =0; n; n >>=1) {
             c += n & 1;
        } 
        return c;
    }
};
