// #define int long long
class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        for(int i = 0; i<n; i++){
            sum += nums[i];
        }
        long long halfSum = 0;
        for(int i = 0; i<n/2; i++){
            halfSum += nums[i];
        }
        long long ans = 0;
        for(int i = 0; i<n; i++){
            if(2*halfSum > sum){
                ans++;
            }
            halfSum -= nums[i];
            halfSum += nums[(i+(n/2))%n];
        }
        return ans;
    }
};