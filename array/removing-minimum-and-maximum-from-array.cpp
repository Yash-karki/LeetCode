class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int minIdx = 0;
        int maxIdx = 0;
        int n = nums.size();

        for(int i = 0; i<n; i++){
            if(nums[i]>maxi){
                maxi = nums[i];
                maxIdx = i;
            }
            if(nums[i]<mini){
                mini = nums[i];
                minIdx = i;
            }
        }
        int left = min(maxIdx,minIdx);
        int right = max(maxIdx,minIdx);

        int front = right+1;
        int back = n-left;

        int both = (left+1)+(n-right);
        return min({front,back,both});
    }
};