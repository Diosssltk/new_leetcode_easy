class Solution {
public:
	int minDepth(TreeNode* root) { 
        if(root == NULL) return 0;
        if(root->left == NULL && root->right == NULL) return 1;
        int l_depth = INT_MAX;
        int r_depth = INT_MAX;
        if(root->left != NULL) l_depth = minDepth(root->left);
        if(root->right != NULL) r_depth = minDepth(root->right);
        return l_depth < r_depth ? l_depth + 1 : r_depth + 1;
    }  
};