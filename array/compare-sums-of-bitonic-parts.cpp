class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int idx;
        for(int i = 0; i<n; i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                idx = i;
            }
        }
        long long sum1 = 0;
        long long sum2 = 0;
        for(int i = 0; i<=idx; i++){
            sum1 += nums[i];
        }
        for(int i = idx; i<n; i++){
            sum2 += nums[i];
        }
        if(sum1 > sum2){
            return 0;
        }else if(sum2 > sum1){
            return 1;
        }
        return -1;
    }
};