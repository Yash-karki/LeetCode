class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& des) {
        unordered_map<int, TreeNode*> mp;
        unordered_set<int> children;
        int n = des.size();
        for (auto& it : des) {
            int par = it[0];
            int child = it[1];
            int isleft = it[2];

            if (mp.find(par) == mp.end())
                mp[par] = new TreeNode(par);
            if (mp.find(child) == mp.end())
                mp[child] = new TreeNode(child);
            if (isleft) {
                mp[par]->left = mp[child];
            } else
                mp[par]->right = mp[child];
            children.insert(child);
        }
        TreeNode* root = nullptr;
        for (auto& it : mp) {
            if (children.find(it.first) == children.end()) {
                root = it.second;

                break;
            }
        }
        return root;
    }
};