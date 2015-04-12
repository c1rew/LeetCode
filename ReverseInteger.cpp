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

/*
tip:
1.一开始漏掉了最前面一句判断的, 溢出之后都要返回0;
2.然后是后面反转之后, 因为定义的是long long, 所以也要判断返回的是否会溢出。
*/
