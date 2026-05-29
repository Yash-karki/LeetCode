class Solution {
public:
    int countSetBits(int n) {
        int count = 0;
        while (n > 0) {
            n = n & (n - 1);
            count++;
        }
        return count;
    }
    
    int countPrimeSetBits(int left, int right) {
        
        vector<bool> isPrime(21, false);
        isPrime[2] = isPrime[3] = isPrime[5] = isPrime[7] = true;
        isPrime[11] = isPrime[13] = isPrime[17] = isPrime[19] = true;
        
        int result = 0;
        
        for (int num = left; num <= right; num++) {
            int setBits = countSetBits(num);
            if (isPrime[setBits]) {
                result++;
            }
        }
        
        return result;
    }
};