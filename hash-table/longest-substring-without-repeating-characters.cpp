class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0;
        int r = 0;
        int ans = 0;
        vector<int> hashMap(256,-1);
        while(r<n){
            if(hashMap[s[r]] != -1){
                l = max(hashMap[s[r]]+1,1);
            }
            int len = r-l+1;
            ans = max(ans,len);
            hashMap[s[r]] = r;
            r++;
        }
        return ans;
    }
};