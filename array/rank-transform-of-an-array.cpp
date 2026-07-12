class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int> mpp;
        vector<int> ans(arr);
        int n = ans.size();
        sort(ans.begin(),ans.end());
        int rank = 1;
        for(int i = 0; i<n; i++){
            if(i>0 && ans[i] > ans[i-1]){
                rank++;
            }
            mpp[ans[i]] = rank;
        }
        for(int i = 0; i<n; i++){
            arr[i] = mpp[arr[i]];
        }
        return arr;
    }
};