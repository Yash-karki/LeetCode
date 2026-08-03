class Solution {
public:
    void solve(string& s, int& ans, int i) {
        if (i >= s.size()) {
            return;
        } else if (s[i] < '0' || s[i] > '9') {
            return;
        } else {
            ans = ans * 10 + (s[i] - '0');
        }
        solve(s, ans, i + 1);
    }

    int myAtoi(string s) {
        int n = s.size();
        int sign = 1;
        long long ans = 0;
        int i= 0;
        while (i < n && s[i] == ' ') {
            i++;
        }

        if (i < n && s[i] == '-') {
            sign = -1;
            i++;
        } else if (i < n && s[i] == '+') {
            i++;
        }

        solve(s, ans, i);
        return sign*ans;
    }
};