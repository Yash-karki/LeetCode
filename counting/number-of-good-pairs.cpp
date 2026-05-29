class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int sum = 0;
        unordered_map<int, int> mpp;
        for(auto it : nums){
            mpp[it]++;
        }
        for(auto &p : mpp){
            int f = p.second;
            sum += (f*(f-1)/2);
        }
        return sum;
    }
};