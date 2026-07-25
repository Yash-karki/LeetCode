class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        // unordered_map<int,int> mpp;
        // vector<int> ans;
        // for(auto it: nums){
        //     mpp[it]++;
        // }
        // for(auto it: mpp){
        //     if(it.second == 2){
        //         ans.push_back(it.first);
        //     }
        // }
        // return ans;

        vector<int> ans;
        int n  = nums.size();
        sort(nums.begin(),nums.end());
        for(int i =0; i<n-1; i++){
            if(nums[i] == nums[i+1]){
                ans.push_back(nums[i]);
            }
        }
        return ans;

    }
};