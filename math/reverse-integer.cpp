class Solution {
public:
    int reverse(long long x) {
        long long ans = 0;
       
        while(x!=0){
            int dig = x%10;
            ans *= 10;
            ans+=dig;
            x /= 10;

        }
        

        if(ans > INT_MAX || ans < INT_MIN){
            return 0;
        }
       
        return ans;
    }
};