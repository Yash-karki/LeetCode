class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int mini = INT_MAX;
        vector<int> arr(n);
        for(int i = n-1; i>=0; i--){
            mini = min(mini,nums[i]);
            arr[i] = mini;
        }
        int maxi = INT_MIN;
        for(int i = 0; i<n; i++){
            maxi = max(maxi,nums[i]);
            mini = arr[i];
            if(maxi-mini <= k){
                return i;
            }
        }
        return -1;
    }
};