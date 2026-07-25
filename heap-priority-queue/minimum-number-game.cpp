class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> arr(n);
        for(int i = 0; i<n-1;){
            arr[i] = nums[i+1];
            arr[i+1] = nums[i];
            i+=2;
        }
        return arr;
    }
};