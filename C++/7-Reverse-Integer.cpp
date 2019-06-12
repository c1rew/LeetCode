class Solution {
public:
    int reverse(int x) {
        bool isPositive = true;
        if (x == INT_MIN ||  x == INT_MAX) return 0;
        if (x < 0)
        {
            isPositive = false;
            x *= -1;
        }
        long long res = 0;
        while(x)
        {
            res = res*10 + x%10;
            x/=10;
        }
        if(res > INT_MAX) return 0;
        if(!isPositive)
        {
            res *= -1;
        }
        return res;
    }
};
