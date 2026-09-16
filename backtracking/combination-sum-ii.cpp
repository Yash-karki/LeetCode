class Solution {
public:

    void solve(vector<vector<int>>& ans, vector<int>& arr, int index, vector<int>& candidates, int target){
        if(target == 0){
            ans.push_back(arr);
            return;
        }
        if(target<0){
            return;
        }
        if(index >= candidates.size()){
            return;
        }
        arr.push_back(candidates[index]);
        solve(ans,arr,index+1,candidates,target-candidates[index]);
        arr.pop_back();
        while(index < candidates.size()-1 && candidates[index] == candidates[index+1]){
            index++;
        }
        solve(ans,arr,index+1,candidates,target);

    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        vector<int> arr;
        int index = 0;
        solve(ans,arr,index,candidates,target);
        return ans;
    }
};