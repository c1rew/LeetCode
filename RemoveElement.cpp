class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int j = 0;
        for (int i = 0; i < n; i++) {
            if(A[i] == elem) {
                continue;
            } else {
                A[j++] = A[i];
            }

        }
        return j;
    }
};


/*
tip:
1. 不能多开辟空间, 只能使用原有的数据, 那就定义两个位移来分别判断;
2. 一开始出现的错误是更改过的串A[j++]没有赋值, 只做了j++;
*/


//可以再简洁一点
class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int j = 0;
        for (int i = 0; i < n; i++) {
            if(A[i] != elem) {
                A[j++] = A[i];
            }
        }
        return j;
    }
};
