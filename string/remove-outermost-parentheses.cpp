class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        stack<char> st;

        for(int i = 0; i<s.size();i++){
            if(s[i] == '('){
                st.push(s[i]);
                if(st.size() > 1){
                    ans+=s[i];
                }

            }else if(s[i] == ')' && !st.empty()){
                st.pop();
                if(st.size() >= 1){
                    ans += s[i];
                }
            }
        }
        return ans;
    }
};