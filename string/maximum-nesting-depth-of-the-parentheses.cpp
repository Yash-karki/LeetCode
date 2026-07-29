class Solution {
public:
    int maxDepth(string s) {
        int ans = INT_MIN;
        int cnt = 0;
        for(char ch : s){
            if(ch == '('){
                cnt++;
            }
            if(ch == ')'){
                cnt--;
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};