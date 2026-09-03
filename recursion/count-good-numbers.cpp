class Solution {
public:
    const int MOD = 1e9 + 7;

    long long solve(long long index, long long n) {
        if (index == n) {
            return 1;
        }

        long long result;

        if (index % 2 == 0) {
            return(5 * solve(index + 1, n)) % MOD;
        } else {
            return (4 * solve(index + 1, n)) % MOD;
        }
    }

    int countGoodNumbers(long long n) {
        return solve(0, n);
    }
};