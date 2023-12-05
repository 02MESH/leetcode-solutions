    void solve(TreeNode* root, std::vector<int> &result) {
        if(!root) return;
        solve(root->left, result);
        result.push_back(root->val);
        solve(root->right, result);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> result;
        solve(root, result);
        return result;
    }
