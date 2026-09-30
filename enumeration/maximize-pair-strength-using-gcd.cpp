class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                long long multi = 1LL*nums[i]*nums[j];
                long long GCD = gcd(nums[i],nums[j]);
                long long strength = multi/(GCD*GCD);
                ans = max(ans,strength);
                
            }
        }
        
        return ans;
    }
};