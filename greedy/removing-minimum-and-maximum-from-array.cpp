class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;

        int minIdx = 0;
        int maxIdx = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < mini) {
                mini = nums[i];
                minIdx = i;
            }

            if (nums[i] > maxi) {
                maxi = nums[i];
                maxIdx = i;
            }
        }
        int left = min(minIdx, maxIdx);
        int right = max(minIdx, maxIdx);
        int front = right + 1;
        int back = n - left;

        int both = (left + 1) + (n - right);
        return min({front, back, both});
    }
};