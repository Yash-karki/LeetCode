class Solution {
public:

    double myPow(double x, long long n) {
        int num = n;
        if (n < 0) {
            return (1.0/ myPow(x,-1*n));
        }
        if (n == 1) {
            return x;
        }
        if (n == 0) {
            return 1.0;
        }
        if (n % 2 == 0) {
            return myPow(x * x, n / 2);
        } else {
            return x*myPow(x, n - 1);
        }
    }
};