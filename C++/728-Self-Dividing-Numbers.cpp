class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> output;
        for (int item = left; item <=right; ++item) {
            int out = item;
            bool is_valid = true;
            while (out && is_valid) {
                const int remain = out % 10;
                if (remain == 0 || item % remain) {
                    is_valid = false;
                }
                out /= 10;
            }
            if (is_valid) {
                output.push_back(item);
            }
        }
        return output;
    }
};
