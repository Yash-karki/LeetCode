class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            int p = nums[i];

            if (p == 2) {
                ans[i] = -1;
                continue;
            }

            for (int x = 0; x < p; x++) {
                if ( (x | (x + 1)) == p ) {
                    ans[i] = x;
                    break;
                }
            }
        }
        return ans;
    }
};
