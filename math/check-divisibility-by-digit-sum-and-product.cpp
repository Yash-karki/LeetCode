class Solution {
public:
    bool checkDivisibility(int n) {
        int cpy = n;
        int sum = 0;
        int multi = 1;
        while(cpy!=0){
            int dig = cpy%10;
            sum += dig;
            multi *= dig;
            cpy /= 10;
        }
        if(n%(sum+multi) == 0){
            return true;
        }
        return false;
    }
};