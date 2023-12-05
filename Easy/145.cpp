void postOrder(TreeNode *root, std::vector<int> &vec) {
    if (!root) return;
    postOrder(root->left, vec);
    postOrder(root->right, vec);
    vec.push_back(root->val);
}

vector<int> postorderTraversal(TreeNode* root) {
    std::vector<int> vec;
    postOrder(root, vec);
    return vec;
}
