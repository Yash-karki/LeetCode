class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int>& arr, vector<int>& nums, int index){
        if(index >= nums.size()){
            ans.push_back(arr);
            return;
        }
        arr.push_back(nums[index]);
        solve(ans,arr,nums,index+1);
        arr.pop_back();
        while(index < nums.size()-1 && nums[index] == nums[index+1]){
            index++;
        }
        solve(ans,arr,nums,index+1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        vector<int> arr;
        int index = 0;
        solve(ans,arr,nums,index);
        return ans;
    }
};