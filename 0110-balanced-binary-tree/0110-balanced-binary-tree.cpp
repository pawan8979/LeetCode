class Solution {
    //TC: O(n^2)
private:
    int height(TreeNode* root)
    {
        if(!root) return 0;
        int lh = height(root->left);
        if(lh == -1) return -1;
        int rh = height(root->right);
        if(rh == -1) return -1;
        
        if(abs(lh-rh) >1 ) return -1;
        return 1 + max(lh,rh);
    }
public:
    bool isBalanced(TreeNode* root) {
       return height(root) != -1 ;
    }
};