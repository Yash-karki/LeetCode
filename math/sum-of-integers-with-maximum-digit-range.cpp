class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        vector<int> vec;
        int digRange;
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int maxi = INT_MIN;
            int mini = INT_MAX;
            while (num > 0) {
                int dig = num % 10;
                maxi = max(maxi, dig);
                mini = min(mini, dig);
                num /= 10;
            }

            int diff = maxi - mini;
            vec.push_back(diff);
            digRange = max(digRange, diff);
        }
        for (int i = 0; i < vec.size(); i++) {
            if (digRange == vec[i]) {
                ans += nums[i];
            }
        }
        return ans;
    }
};