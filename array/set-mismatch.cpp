class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> mp;
        int duplicate = -1, missing = -1;
        int n = nums.size();

        for (int x : nums) {
            mp[x]++;
        }
        
        for (int i = 1; i <= n; i++) {
            if (mp[i] == 2)
                duplicate = i;
            else if (mp[i] == 0)
                missing = i;
        }

        return {duplicate, missing};
    }
};