class Solution {
public:
    bool IsPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    int nextPrime(int n) {
        while (true) {
            if (IsPrime(n)) return n;
            n++;
        }
    }

    int nextNonPrime(int n) {
        while (true) {
            if (!IsPrime(n)) return n;
            n++;
        }
    }

    int minOperations(vector<int>& nums) {
        int ops = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                if (!IsPrime(nums[i])) {
                    int next = nextPrime(nums[i]);
                    ops += (next - nums[i]);
                }
            } else {
                if (IsPrime(nums[i])) {
                    int next = nextNonPrime(nums[i]);
                    ops += (next - nums[i]);
                }
            }
        }
        return ops;
    }
};