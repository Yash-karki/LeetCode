class Solution {
public:

    void solve(vector<int>& nums, vector<vector<int>>& res, vector<int>& out, int index){
        if(index >= nums.size()){
            res.push_back(out);
            return;
        }
        out.push_back(nums[index]);
        solve(nums,res,out,index+1);
        out.pop_back();
        while(index < nums.size()-1 && nums[index]==nums[index+1]){
            index++;
        }
        solve(nums,res,out,index+1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        vector<int> output;
        int index = 0;
        solve(nums,res,output,index);
        
        return res;
    }
};