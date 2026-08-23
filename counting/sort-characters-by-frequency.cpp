class Solution {
public:
    string frequencySort(string s) {
        unordered_map<int,int> mpp;

        for(auto ch : s){
            mpp[ch]++;
        }
        string ans = "";
        while(!mpp.empty()){
            char maxChar = 0;
            char MaxFreq = 0;
            for(auto it : mpp){
                if(it.second > maxFreq){
                    maxFreq = it.second;
                    maxChar = it.first;
                }
            }
            while(maxFreq--){
                ans.push_back(maChar);
            }
            mpp.erase(maxChar);
        }
        return ans;

    }
};