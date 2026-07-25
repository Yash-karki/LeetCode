class Solution {
public:
    int subtractProductAndSum(int n) {
        int multi = 1;
        int sum = 0;
        while(n != 0){
            int dig = n%10;
            multi *= dig;
            sum += dig;
            n /= 10;
        }
        return multi-sum;
    }
};