class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;
        for(int i = 0; i<n; i++){
            vector<int> hashMap(256,0);
            for(int j = i; j<n; j++){
                if(hashMap[s[j]] == 1) break;
                hashMap[s[j]] = 1;
                int len = j-i+1;
                ans = max(ans,len);
            }
        }
        return ans;
    }
};