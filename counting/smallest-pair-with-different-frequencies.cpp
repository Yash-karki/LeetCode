class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int, int> mpp;
        vector<int> dis;
        vector<int> ans = {-1,-1};
        for(auto it : nums){
            mpp[it]++;
        }
        for(auto &it : mpp){
            dis.push_back(it.first);
        }
        sort(dis.begin(), dis.end());
        for(int i = 0; i<dis.size(); i++){
            for(int j = i+1; j<dis.size(); j++){
                if(mpp[dis[i]] != mpp[dis[j]]){
                    return {dis[i],dis[j]};
                }
            }
        }
        return {-1,-1};
    }
};