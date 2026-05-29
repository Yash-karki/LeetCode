class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        if (n < 2*k){
            return false;
        }

        vector<int> increase(n, 1);
        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1])
                increase[i] = increase[i - 1] + 1;
        }

        for (int i = k - 1; i < n - k; i++) {
            if (increase[i] >= k) {
                int nextLen = 1;
                for (int j = i + 1; j<n-1 && nums[j+1]>nums[j]; j++)
                    nextLen++;

                if (nextLen >= k)
                    return true;
            }
        }

        return false;
    }
};
