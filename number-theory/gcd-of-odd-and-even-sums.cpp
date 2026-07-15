class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddNum = n*n;
        int eveNum = n*(n+1);
        return gcd(oddNum,eveNum);
    }
};