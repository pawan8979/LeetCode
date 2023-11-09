class Solution {
public:
    int minDepth(TreeNode* root) {
         if(root==NULL)
            return 0;
        int minleft= minDepth(root->left);
        int minright= minDepth(root->right);
        
        if(minleft==0 || minright==0)
            return 1+max(minleft,minright);
        

        return 1+min(minleft,minright);
    }
};