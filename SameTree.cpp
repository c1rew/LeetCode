/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if (p == NULL && q == NULL) return true;

        if ((!p && q) || (p && !q) || (p->val != q->val)) return false;

        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};


/*
tip:
1. 两树都为空, 返回true;
2. 两树其中一个为空, 另一个不为空, 或者值不相等, 返回false;
3. 当前节点值相等, 则嵌套判断两树的左右树是否相等;
*/
