class Solution {
public: 
    int maxDepth(TreeNode* root) { 
        int max = 0; 
        if (root != NULL) { 
            max++; 
            int max_left = maxDepth(root->left); 
            int max_right = maxDepth(root->right); 
            max += max_left > max_right ? max_left : max_right; 
        } 
        return max; 
    } 
};
/*
与以下方法相比，空间代价更小，method1先解决从根到左下角与从根到左下角的邻居，method2直接操作全部。
int maxDepth(TreeNode* root) {
	if (root==NULL) return 0;
	else return root->left->val > root->right->val ? root->left->val + 1 : root->right->val + 1;
}
*/