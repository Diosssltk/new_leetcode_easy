/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 *///hard thought
class Solution {
public:
	bool ismirror(TreeNode* l,TreeNode* r) {
		if (!l && !r) return true;
		else if (l && r && l->val == r->val && ismirror(l->left,r->right) && ismirror(l->right,r->left)) return true;
		else return false;
	}
    bool isSymmetric(TreeNode* root) {
    	if (root == NULL) return true;
    	return ismirror (root->left,root->right);
    }
};