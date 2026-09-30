class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>> mpp;
        int n = nums.size();
        for(int i = 0; i<n ;i++){
            mpp[nums[i]].push_back(i);
        }
        int ans = 0;
        for(auto it : mpp){
            vector<int> arr = it.second;
            if(arr.size() == 3){
                if(arr[1] - arr[0] == arr[2]-arr[1]){
                    ans++;
                }
            }
        }
        return ans;
    }
};