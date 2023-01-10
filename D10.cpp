#include <bits/stdc++.h>
using namespace std;
bool isSameTree(TreeNode *p, TreeNode *q)
{
    if (p == NULL && q == NULL)
    {
        return true;
    }
    if (p == NULL && q != NULL)
    {
        return false;
    }
    if (p != NULL && q == NULL)
    {
        return false;
    }
    if (p->val != q->val)
    {
        return false;
    }
    bool leftst = isSameTree(p->left, q->left);
    bool rightst = isSameTree(p->right, q->right);
    return leftst & rightst;
}
