int balanceFactor(TreeNode* root, bool& flag) {
    if(!root) return 0;

    int leftSubtree = balanceFactor(root->left, flag);
    int rightSubtree = balanceFactor(root->right, flag);

    if(abs(leftSubtree-rightSubtree) > 1) flag = false;

    return (leftSubtree > rightSubtree) ?  leftSubtree+1 : rightSubtree+1;
}

bool isBalanced(TreeNode* root) {
    bool flag = true;
    balanceFactor(root, flag);
    return flag;
}
