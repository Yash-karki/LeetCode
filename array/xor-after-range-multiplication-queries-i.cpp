class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int row = queries.size();
        const int mod = 1000000007;
        for (int i = 0; i < row; i++) {
            int idx = queries[i][0];
            while (idx <= queries[i][1]) {
                nums[idx] = (1LL * nums[idx] * queries[i][3]) % mod;
                idx += queries[i][2];
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans ^= nums[i];
        }
        return ans;
    }
};