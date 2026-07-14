class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        vector<int> freq(n+1);

        for(int it : nums){
            if(freq[it] >= ans.size()){
                ans.push_back({});
            }

            ans[freq[it]].push_back(it);
            freq[c]++;
        }
        return ans;
    }
};