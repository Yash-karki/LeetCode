class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        int cycle = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == s[(i+1)%n]){
                cycle++;
            }
        }
        int ans = 0;
        if(k ==  cycle-1){
            ans+=cycle;
        }
        if(k==cycle){
            ans += n-cycle;
        }
        return ans;
    }
};