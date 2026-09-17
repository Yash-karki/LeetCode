class Solution {
public:

    void solve(vector<vector<int>>& ans, vector<int>& arr,vector<int>& nums,int index){
        if(index >= nums.size()){
            ans.push_back(arr);
            return;
        }
        arr.push_back(nums[index]);
        solve(ans,arr,nums,index+1);
        arr.pop_back();
        solve(ans,arr,nums,index+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> arr;
        int index = 0;
        solve(ans,arr,nums,index);
        return ans;
    }
};