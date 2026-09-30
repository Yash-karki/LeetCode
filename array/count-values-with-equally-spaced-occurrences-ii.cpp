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
            if(arr.size() >= 3){
                int first = arr[1]-arr[0];
                bool valid = true;
                for(int i = 2; i<arr.size(); i++){
                    if(arr[i]-arr[i-1] != first){
                        valid = false;
                        break;
                    }
                }
                if(valid){
                    ans++;
                }
            }
        }
        return ans;
    }
};