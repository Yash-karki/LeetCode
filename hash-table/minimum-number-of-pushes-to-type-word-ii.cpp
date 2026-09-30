class Solution {
public:
    int minimumPushes(string word) {
        vector<int> cnt(26,0);
        for(char ch : word){
            cnt[ch-'a']++;
        }
        sort(cnt.begin(),cnt.end(), greater<int>());
        int pushcnt = 0;

        for(int i = 0; i<26; i++){
            pushcnt += cnt[i] * (i/8 + 1);
        }

        return pushcnt;
    }
};