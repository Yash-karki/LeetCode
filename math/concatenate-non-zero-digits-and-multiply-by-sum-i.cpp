class Solution {
public:
    long long sumAndMultiply(int n) {
        int x = 0;
        int power = 1;
        while(n>0){
            int digit = n%10;
            if(digit != 0){
                digit *= power;
                power *= 10;
                x += digit;
            }
            n /= 10;
        }
        
        int sum = 0;
        int cpy = x;
        while(cpy>0){
            int dig = cpy%10;
            sum += dig;
            cpy /= 10;
        }
        cout << sum << endl;
        return x*sum;
    }
};