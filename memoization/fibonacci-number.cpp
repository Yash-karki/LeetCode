class Solution {
public:
    int fib(int n) {
        vector<int> dp(n+1, -1);
        
        if(n == 1 || n == 0){
            return n;
        }
        if(dp[n] != -1){
            return dp[n];
        }
        dp[n] = fib(n-1) + fib(n-2);
        return dp[n];
    }
};