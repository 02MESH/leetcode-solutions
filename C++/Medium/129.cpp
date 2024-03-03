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

//other way
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void recurse(TreeNode *root, int multiplied, int &total) {
        if(!root)return;
        multiplied = multiplied * 10 + root->val;
        recurse(root->left, multiplied, total);
        recurse(root->right, multiplied, total);
        if(!root->left&&!root->right)
            total += multiplied;
        multiplied /= 10;
        return;
    }

    int sumNumbers(TreeNode* root) {
        int total = 0;
        recurse(root, 0, total);
        return total;
    }
};
