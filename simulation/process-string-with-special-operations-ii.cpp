class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.size();
        string ans = "";
        for (int i = 0; i < n; i++) {
            if (s[i] == '#') {
                ans += ans;
            } else if (s[i] == '%') {
                reverse(ans.begin(), ans.end());
            } else if (s[i] == '*') {
                if (!ans.empty())
                    ans.pop_back();
            } else {
                ans += s[i];
            }
        }
        if(!ans.empty()){
            for(int i = 0; i<ans.size(); i++){
                if(i == k){
                    return ans[i];
                }
            }
        }
        return '.';
    }
};