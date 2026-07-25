class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int m = s.size();
        int n = t.size();
        int sum = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (s[i] == t[j]) {
                    sum += abs(i - j);
                }
            }
        }
        return sum;
    }
};