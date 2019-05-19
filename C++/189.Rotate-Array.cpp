class Solution {
public:
    void rotate(int nums[], int n, int k) {
        k %= n;
        reverse(nums, n-k, n-1);
        reverse(nums, 0, n-k-1);
        reverse(nums, 0, n-1);
    }

    void reverse(int s[], int start, int end) {
        while (start < end) {
            int t = s[start];
            s[start++] = s[end];
            s[end--] = t;
        }
    }
};

/*tip:
1. 这个题目是右移k位, 可以转换成左移n-k位, 这样就回到之前的字符串左移的问题 (X'Y')' = YX;
2. 注意: reverse里交换两个位置的值时, 需要开辟一个临时空间来存储;

时间复杂度O(n) 空间复杂度O(1)*/
