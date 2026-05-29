class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int ToAdd = 1;
        for (int i = 0; i < target.size(); i++) {
            while (ToAdd <= target[i]) {
                ans.push_back("Push");
                if (ToAdd != target[i]) {
                    ans.push_back("Pop");
                }
                ToAdd++;
            }
        }
        return ans;
    }
};