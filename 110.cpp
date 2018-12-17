class Solution {
public:
	bool isBalanced(TreeNode*  root) {
		if(root == NULL) return true;
		return judge(root);
	}

	bool judge(TreeNode* root) {
        if(root == NULL) return true;
		if((maxDepth(root->left) - maxDepth(root->right) <= 1) && (maxDepth(root->left) - maxDepth(root->right) >= -1)) {
			if(judge(root->left) && judge(root->right)) return true;
			else return false;
		}
		return false;
	}

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