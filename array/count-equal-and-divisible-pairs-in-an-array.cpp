class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int ans = 0;
        int n=nums.size();
        for (int i=0;i<n;++i){
            int current = i+1;
            while (current < n){
                if (nums[i]==nums[current] && (i*current)%k==0 ){
                    ++ans;
                }             
                ++current;
            }
        }

        return ans;
    }
};
