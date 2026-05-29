class Solution {
public:
    int mirrorDistance(int n) {
        int ans = 0;
        int n1 = n;
        while(n!=0){
            ans = ans*10;
            int dig = n%10;
            ans += dig;
            n = n/10;
        }
        return abs(n1-ans);
    }
};