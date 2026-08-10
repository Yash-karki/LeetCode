class Solution {
public:

    void solve(string str, int open, int close,  vector<string> &ans){
        if(open == 0 && close == 0){
            ans.push_back(str);
            return;
        }
        if(open == close){
            string str1 = str;
            str1.push_back('(');
            solve(str1,open-1,close,ans);
        }else if(open == 0){
            string str1 = str;
            str1.push_back(')');
            solve(str1,open,close-1,ans);
        }else{
            string str1 = str;
            string str2 = str;
            str1.push_back('(');
            str2.push_back(')');
            solve(str1,open-1,close,ans);
            solve(str2,open,close-1,ans);
        }

    }
    vector<string> generateParenthesis(int n) {
        int open = n;
        int close = n;
        vector<string> ans;
        string str = "";
        solve(str,open,close,ans);
        return ans;
    }
};