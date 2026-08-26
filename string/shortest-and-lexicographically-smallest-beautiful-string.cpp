class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        for (int i = k; i <= s.size(); i++) {
            string ans = "";
            for (int j = 0; j <= s.size() - i; j++) {
                string temp = s.substr(j, i);
                int ones = 0;
                for (auto ch : temp) {
                    if (ch == '1') {
                        ones++;
                    }
                }
                if (ones == k) {
                    if (ans.empty() || temp > ans) {
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