class Solution {
public:
    int numSub(string s) {
        const int MOD = 1e9 + 7;
        int n = s.size();
        long long ans = 0;
        long long cnt = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == '1'){
                cnt++;
                
            }else{
                ans += (cnt * (cnt + 1) / 2) % MOD;
                cnt = 0;
            }
        }
        ans += (cnt * (cnt + 1) / 2) % MOD;
        return ans;
    }
};