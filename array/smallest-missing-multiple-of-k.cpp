class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;  
        for(auto it : nums){
            mpp[it]++;
        }
        int ans = k;
        while(mpp.count(ans)){
            ans+=k;
        }
        return ans;
    }
};