class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        set<int> item_set;
        int target;
        for (int item : A) {
            if (item_set.count(item)) {
                return item;
            } else {
                item_set.insert(item);
            }
        }
        return -1;
    }
};
