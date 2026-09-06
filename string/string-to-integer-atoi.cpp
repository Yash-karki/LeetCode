class Solution {
public:
    // int myAtoi(string s) {
    //     int i = 0;
    //     int sign = 1;
    //     long long ans = 0;
    //     while(i<s.size() && s[i] == ' '){
    //         i++;
    //     }
    //     if(s[i] == '-'){
    //         sign = -1;
    //         i++;
    //     }else if(s[i] == '+'){
    //         i++;
    //     }
    //     while(i<s.size()){
    //         if(s[i] >= '0' && s[i] <= '9'){
    //             ans*= 10;
    //             ans+=s[i] - '0';
    //             if(ans > INT_MAX && sign == -1){
    //                 return INT_MIN;
    //             }else if(ans > INT_MAX && sign == 1){
    //                 return INT_MAX;
    //             }
    //             i++;
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     return ans*sign;
    // }


    // Recursion
    void solve(int i, long long& ans, string& s) {
        if (s[i] < '0' || s[i] > '9') {
            return;
        }
        if(ans > INT_MAX){
            return;
        }
        if(i>=s.size()){
            return;
        }
        ans *= 10;
        ans += s[i] - '0';
        solve(i+1,ans,s);
    }

    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long long ans = 0;
        while (i < s.size() && s[i] == ' ') {
            i++;
        }
        if (s[i] == '-') {
            sign = -1;
            i++;
        } else if (s[i] == '+') {
            i++;
        }
        solve(i, ans, s);
        if (ans > INT_MAX && sign == -1) {
            return INT_MIN;
        } else if (ans > INT_MAX && sign == 1) {
            return INT_MAX;
        }
        return ans * sign;
    }
};