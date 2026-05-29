class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;

        for (int n : nums) {
            if ((n & 1) == 0) {
                ans.push_back(-1);
                continue;
            }

            int lowbit = (n + 1) & -(n + 1);

            ans.push_back(n - (lowbit >> 1));
        }

        return ans;
    }
};
