class Solution {
public:
    double solve(double x, int n) {
        if (n == 1) {
            return x;
        }
        if (n == 0) {
            return 1.0;
        }
        if (n % 2 == 0) {
            return solve(x * x, n / 2);
        } else {
            return x*solve(x, n - 1);
        }
    }

    double myPow(double x, int n) {
        int num = n;
        if (num < 0) {
            return 1.0 / solve(x, -1 * n);
        }
        return solve(x, n);
    }
};