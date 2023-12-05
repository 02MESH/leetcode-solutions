void recurse(TreeNode* root) {
    if(!root || (!root->left && !root->right)) return;
    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;
    recurse(root->left);
    recurse(root->right);
}

TreeNode* invertTree(TreeNode* root) {
    recurse(root);
    return root;
}