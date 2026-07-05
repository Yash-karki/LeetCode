class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        string word3;
        int i = 0;
        for(i = 0; i< min(n,m); i++){
            word3.push_back(word1[i]);
            word3.push_back(word2[i]);
        }
        while(i<n){
            word3.push_back(word1[i]);
            i++;
        }
        while(i<m){
            word3.push_back(word2[i]);
            i++;
        }
        return word3;
    }
};