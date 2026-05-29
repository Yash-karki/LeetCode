class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";
        for(string &it1 : words){
            int sum = 0;
            for(char ch : it1){
                sum += weights[ch - 'a'];
                
            }
            int r = sum%26;
            
            char mapp = 'z' - r;
            ans.push_back(mapp);

        }
        return ans;
    }
};