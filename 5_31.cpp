#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    bool judge(TreeNode *lhs, TreeNode *rhs)
    {
        if (lhs == NULL && rhs == NULL)
            return true;
        if (lhs == NULL || rhs == NULL)
            return false;
        if (lhs->val != rhs->val)
            return false;
        return judge(lhs->right, rhs->left) & judge(lhs->left, rhs->right);
    }
    bool isSymmetric(TreeNode *root)
    {
        if (root == NULL)
            return true;
        return judge(root->left, root->right);
    }
};
