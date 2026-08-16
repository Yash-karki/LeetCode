class Solution {
public:
    int reverse(int x) {
        long long ans = 0;
        bool flag = false;
        if(x <0){
            x*=-1;
            flag = true;
        }
        while(x>0){
            int dig = x%10;
            ans *= 10;
            ans+=dig;
            x /= 10;

        }
        if(flag){
            ans *= -1;
        }

        if(ans > INT_MAX || ans < INT_MIN){
            return 0;
        }
       
        return ans;
    }
};