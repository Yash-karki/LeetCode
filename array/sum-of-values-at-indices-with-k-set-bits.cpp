#pragma GCC optimize("Ofast")

class Solution {
public:

    int countBits(int x){
        int cnt = 0;
        while(x){
            cnt += (x&1);
            x = x>>1;
        }
        return cnt;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(countBits(i) == k){
                sum += nums[i];
            }
        }
        return sum;
    }
};