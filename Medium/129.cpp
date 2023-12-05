void solve(TreeNode* root, int &num, int &sum) {
    if(!root) return;
    if(!root->left && !root->right) {
        sum += num * 10 + root->val;
        return;
    }
    num = num * 10 + root->val;
    solve(root->left, num, sum);
    solve(root->right, num, sum);
    num /= 10;
}

int sumNumbers(TreeNode* root) {
    int num = 0, sum = 0;
    solve(root, num, sum);
    return sum;
}
