class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>> &res, vector<int>& out, int index) {
        if(index >= nums.size()){
            res.push_back(out);
            return;
        }
        out.push_back(nums[index]);
        solve(nums,res,out,index+1);
        out.pop_back();
        solve(nums,res,out,index+1);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> output;

        solve(nums, res, output, 0);

        return res;
    }
};