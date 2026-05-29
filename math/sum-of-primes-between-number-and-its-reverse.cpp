class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int cpy = n;
        int rev = 0;
        while (cpy != 0) {
            int dig = cpy % 10;
            rev = rev * 10;
            rev += dig;
            cpy = cpy / 10;
        }
        vector<bool> isPrime(max(n,rev) + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= max(n, rev); i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= max(n,rev); j += i) {
                    isPrime[j] = false;
                }
            }
        }

        long long sum = 0;
        for (int i =min(n,rev); i <= max(n,rev); i++) {
            if (isPrime[i])
                sum += i;
        }

        return sum;
    }
};