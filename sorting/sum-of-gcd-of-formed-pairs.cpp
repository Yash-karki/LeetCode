class Solution {
public:
    long long gcdSum(vector<int>& nums) {

        int n = nums.size();
        vector<int> prefixGcd;
        int maxx = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxx = max(maxx, nums[i]);
            prefixGcd.push_back(gcd(nums[i], maxx));
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        int i = 0;
        int j = prefixGcd.size() - 1;
        long long sum = 0;
        while (i < j) {
            sum = sum + gcd(prefixGcd[i], prefixGcd[j]);
            i++;
            j--;
        }
        return sum;
    }
};