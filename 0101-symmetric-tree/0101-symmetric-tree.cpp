class Solution {
private:
    bool helper(TreeNode* p,TreeNode* q)
    {
        if(p==NULL || q==NULL)
        {
            return p==q;
        }
        if(p->val!=q->val)
        {
            return false;
        }
        return helper(p->left,q->right)&&helper(p->right,q->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
       return helper(root->left,root->right);
    }
};