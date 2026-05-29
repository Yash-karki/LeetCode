class Solution {
public:
    bool validDigit(int n, int x) {
        int temp = n;
        bool found = false;
        while(n != 0){
            int dig = n%10;
            if(dig == x){
                found = true;
                break;
            }
            n = n/10;
        }
        while(temp >= 10){
            temp /= 10;
        }
        if(temp == x) return false;
        return found;
    }
};