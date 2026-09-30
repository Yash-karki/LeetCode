class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int j = nums[0];
        for(int i = 0; i<n;){
            if(nums[i] == j){
                i++;
                j++;
                continue;
            }
            else{
                ans.push_back(j);
                j++;
            }
        }
        return ans;
    }
};