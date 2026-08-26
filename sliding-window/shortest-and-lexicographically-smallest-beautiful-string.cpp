class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        for (int i = k; i <= n; i++) {
            string ans = "";
            for (int j = 0; j <= n- i; j++) {
                string temp = s.substr(j, i);
                int ones = 0;
                for (auto &ch : temp) {
                    if (ch == '1') {
                        ones++;
                    }
                }
                if (ones == k) {
                    if (ans.empty() || temp < ans) {
                        ans = temp;
                    }
                }
            }
            if(!ans.empty()){
                return ans;
            }
        }
        return "";
    }
};