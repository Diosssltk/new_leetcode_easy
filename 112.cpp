class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == NULL) return NULL;
        vector<int> sums;
        int sum1 = 0;
        path(root, sum1, sums);
        for(const int &k : sums) {
            if(k == sum) return 1;
        }
        return 0;
    }

    void path(TreeNode * root, int sum1, vector<int>& sums) {
        if(!root->left && !root->right) sums.push_back(sum1 + root->val);
        if(root->left) path(root->left, sum1 + root->val, sums);
        if(root->right) path(root->right, sum1 + root->val, sums);
    }
};