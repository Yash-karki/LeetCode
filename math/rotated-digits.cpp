class Solution {
public:
     int rotatedDigits(int n) {
        int cnt = 0;

        for (int i = 1; i <= n; i++) {
            int num = i;
            bool valid = true;
            bool chnged = false;

            while (num > 0) {
                int dig = num % 10;

                if (dig == 3 || dig == 4 || dig == 7) {
                    valid = false;
                    break;
                }

                if (dig == 2 || dig == 5 || dig == 6 || dig == 9) {
                    chnged = true;
                }

                num /= 10;
            }

            if (valid && chnged) cnt++;
        }

        return cnt;
    }
};