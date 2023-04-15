class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        //if root node is null return
        if(!root){
            return root;
        }

        //swap the left subtree with the right subtree
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        //traverse to left and right subtree and do the same
        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};