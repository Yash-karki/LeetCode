class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = *max_element(nums.begin(), nums.end());
        int ans;
        int n = nums.size();
        for (int i = 1; i <= maxi; i++) {
            int sum = 0;
            for (int j = 0; j < n; j++) {
                sum += ceil((double)nums[j]/i);
            }
            if(sum<=threshold){
                ans = i;
                break;
            }
        }
        return ans;
    }
};