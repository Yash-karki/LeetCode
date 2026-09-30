class Solution {
public:
    int solve(vector<int> &arr){
        int n = arr.size();
        int score = 0;
        vector<int> pref(n);
        vector<int> suff(n);
        pref[0] = arr[0];
        for(int i = 1; i<n; i++){
            pref[i] = gcd(pref[i-1],arr[i]);
        }
        suff[n-1] = arr[n-1];
        for(int i = n-2; i>=0; i--){
            suff[i] = gcd(suff[i+1],arr[i]);
        }
        for(int i  = 0; i<n-1; i++){
            if(pref[i] == suff[i+1]){
                score++;
            }
        }
        return score;
    }
    int maxValidSplits(vector<int>& nums) {
        int n = nums.size();
        int ans = solve(nums);
        for(int i = 0; i<n; i++){
            vector<int> arr;
            for(int j = 0; j<n; j++){
                if(j!=i){
                    arr.push_back(nums[j]);
                }
            }
                ans = max(ans,solve(arr));
        }
        return ans;
    }
};