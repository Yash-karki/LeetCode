class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return false;

        int p = 0;
        int q = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i + 1] > nums[i]) {
                p = i + 1;
            } else {
                break;
            }
        }
        if (p == 0 || p == n-1) return false;

        for (int i = p; i < n-1; i++) {
            if (nums[i + 1] < nums[i]) {
                q = i + 1;
            } else {
                break;
            }
        }
        if (q == p || q == n-1) return false;

        for (int i = q; i < n - 1; i++) {
            if (nums[i + 1] <= nums[i]) {
                return false;
            }
        }

        return true;
    }
};
