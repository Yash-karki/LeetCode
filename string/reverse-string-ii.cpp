class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        for (int i = 0; i < n; i += 2 * k) {
            int left = i;
            int right = min(i + k, n);
            reverse(s.begin() + left, s.begin() + right);
        }
        return s;
    }
};