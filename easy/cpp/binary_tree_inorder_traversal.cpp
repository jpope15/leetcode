// https://leetcode.com/problems/binary-tree-inorder-traversal/

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> results;
        inOrderHelper(results, root);
        return results;
    }
    void inOrderHelper(vector<int>& results, TreeNode* root)
    {
        if (root)
        {
            inOrderHelper(results, root->left);
            results.push_back(root->val);
            inOrderHelper(results, root->right);
        }
    }
};