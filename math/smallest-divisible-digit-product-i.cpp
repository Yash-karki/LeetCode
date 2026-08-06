class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans;
        for(int i = n; i<n+10; i++){
            int cpy =i;
            int prod = 1;
            while(cpy>0){
                int dig = cpy%10;
                prod *= dig;
                cpy /= 10;
            }
            if(prod % t == 0){
                ans = i;
                break;
            }
        }
        return ans;
    }
};