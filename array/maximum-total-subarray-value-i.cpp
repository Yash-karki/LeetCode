class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        long long ans = nums[n-1] - nums[0];
        ans *= k;
        return ans;
    }
};