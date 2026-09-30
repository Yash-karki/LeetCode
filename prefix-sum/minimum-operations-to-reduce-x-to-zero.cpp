class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = 0;
        for (int num : nums) {
            total += num;
        }

        int target = total - x;

        if (target < 0) {
            return -1;
        }

        int left = 0;
        int currentSum = 0;
        int maxLen = -1;

        for (int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];

            while (currentSum > target && left <= i) {
                currentSum -= nums[left];
                left++;
            }

            if (currentSum == target) {
                maxLen = max(maxLen, i - left + 1);
            }
        }

        if (maxLen == -1) {
            return -1;
        }

        return nums.size() - maxLen;
    }
};