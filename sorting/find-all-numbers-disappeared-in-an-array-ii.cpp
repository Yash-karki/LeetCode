class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        unordered_set<int> st(nums.begin(), nums.end());
        int i = lower;
        while(i<=upper){
            if(st.count(i)){
                i++;
                continue;
            }
            int start = i;
            while(i<= upper && !st.count(i)){
                i++;
            }
            ans.push_back({start,i-1});
            
        }
        return ans;
    }
};