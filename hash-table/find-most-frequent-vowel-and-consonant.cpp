class Solution {
public:
    int maxFreqSum(string s) {
        int freq1 = 0,freq2 = 0;
        unordered_map<int, int> mpp1;
        unordered_map<int, int> mpp2;
        for(auto it : s){
            if(it == 'a' ||it == 'e' ||it == 'i' ||it == 'o' ||it == 'u' ){
                mpp1[it]++;
            }
            else{
                mpp2[it]++;
            }
        }
        for (auto &p : mpp1) {
            freq1 = max(freq1, p.second);
        }
        for (auto &p : mpp2) {
            freq2 = max(freq2, p.second);
        }
        return freq1+freq2;
    }
};