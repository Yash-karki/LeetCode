class Solution {
public:

    void solve(vector<int>& candidates,int target,int index,vector<vector<int>>& res,vector<int> output,int count, int k){
        if(count > k){
            return;
        }
        if(count == k && target == 0){
            res.push_back(output);
            return;
        }
        if(index >= candidates.size()){
            return;
        }
        if(target < 0){
            return;
        }
        output.push_back(candidates[index]);
        solve(candidates, target-candidates[index],index+1, res, output, count + 1, k);
        output.pop_back();

        while( index < candidates.size()-1 && candidates[index] == candidates[index+1] ){
            index++;
        }
        solve(candidates, target, index+1, res,output,count,k);
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> candidates = {1,2,3,4,5,6,7,8,9};
        vector<vector<int>> res;
        vector<int> output;
        int index = 0;
        int count = 0;
        // int target = n;
        solve(candidates,n,index,res,output,count,k);
        return res;

    }
};