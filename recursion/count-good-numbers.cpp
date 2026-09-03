class Solution {
public:
    const int MOD = 1e9 + 7;

    long long solve(long long index, long long n) {
        if (index == n) {
            return 1;
        }

        long long result;

        if (index % 2 == 0) {
            result = 5 * solve(index + 1, n);
        } else {
            result = 4 * solve(index + 1, n);
        }

        return result % MOD;
    }

    int countGoodNumbers(long long n) {
        return solve(0, n);
    }
};