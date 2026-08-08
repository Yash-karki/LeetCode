class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;
        vector<int> hashMap(256, -1);
        int l = 0, r = 0;
        while(r<n){
            if(hashMap[s[r]] != -1){
                l = max(hashMap[s[r]] + 1,l);
            }
            int len = r-l+1;
            ans = max(ans,len);
            hashMap[s[r]] = r;
            r++;
        }
        return ans;
    }
};