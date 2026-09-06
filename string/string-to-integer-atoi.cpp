class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        int ans = 0;
        while(i<s.size() && s[i] == ' '){
            i++;
        }
        if(s[i] == '-'){
            sign = -1;
            i++;
        }else if(s[i] == '+'){
            i++;
        }
        while(i<s.size()){
            if(s[i] >= '0' && s[i] <= '9'){
                ans*= 10;
                ans+=s[i] - '0';
                i++;
            }
            else{
                break;
            }
        }
        return ans*sign;
    }
};