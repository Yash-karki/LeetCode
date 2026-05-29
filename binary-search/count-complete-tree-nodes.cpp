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

    void traversal(TreeNode* root, vector<int>& nodes){
        if(root == nullptr){
            return;
        }
        nodes.push_back(root->val);
        traversal(root->left, nodes);
        traversal(root->right, nodes);
    }
    int countNodes(TreeNode* root) {
        vector<int> nodes;
        traversal(root, nodes);
        return nodes.size();
    }
};