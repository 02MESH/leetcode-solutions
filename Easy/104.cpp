int maxDepth(TreeNode* root) {
    if(!root) return 0;   
    int leftSubtree = maxDepth(root->left);
    int rightSubtree = maxDepth(root->right);
    int max = (leftSubtree > rightSubtree) ? leftSubtree : rightSubtree;
    return max + 1;
}
