// Leetcode #104 - Maximum Depth of Binary Tree
// Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/
// Author: Aachal Saxena

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return 1 + max(left, right);
    }
};
