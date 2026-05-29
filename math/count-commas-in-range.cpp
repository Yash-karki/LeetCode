class Solution {
public:
    int countCommas(int n) {
        long long res = 0;

        for (int i = 1000; i <= n; i++) {

            int count = 0;
            int temp = i;

            while (temp > 0) {
                count++;
                temp = temp / 10;
            }

            int commas = (count - 1) / 3;

            res += commas;
        }

        return res;
    }
};