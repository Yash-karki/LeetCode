class Solution {
public:
    int minimumFlips(int n) {
        string s = "";
        while (n > 0) {
            s += char('0' + (n % 2));
            n /= 2;
        }
        reverse(s.begin(), s.end());

        string rev = s;
        reverse(rev.begin(), rev.end()); 

        int flips = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != rev[i]){
                flips++;
            }
        }
        return flips;
    }
};
