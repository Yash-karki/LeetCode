class Solution {
public:
    int addDigits(int num) {
        int ans;
        if(num == 0){
            return 0;
        }
        if(num%9 == 0){
            ans = 9;
        }else{
            ans = num%9;
        }
        return ans;
    }
};