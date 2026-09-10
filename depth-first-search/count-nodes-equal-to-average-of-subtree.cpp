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
   int findcnt(TreeNode * root){
        if(root==NULL){
            return 0;
        }
        int LC= findcnt(root->left);
        int RC= findcnt(root->right);
        return 1+ LC+RC;
    }
    int findsum(TreeNode * root){
        if(root==NULL){
            return 0;
        }
        int leftsum= findsum(root->left);
        int rightsum= findsum(root->right);
        return leftsum+rightsum+root->val;
    }
    int averageOfSubtree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int nodeCnt=0;
        while(!q.empty()){
            TreeNode* node= q.front();
            q.pop();
            if(findsum(node)/findcnt(node)==node->val){
                nodeCnt++;
            }
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        return nodeCnt;
    }
};