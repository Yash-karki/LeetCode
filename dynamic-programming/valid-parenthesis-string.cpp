class Solution {
public:

    bool solve(string s, int i, int open){
        if(open <0){
            return false;
        }
        if(i ==  s.length()){
            return open == 0;
        }
        if(s[i] ==  '('){
            return solve(s,i+1,open+1);
        }else if(s[i] == ')'){
            return solve(s,i+1,open-1);
        }else{
            return (solve(s,i+1,open) || solve(s,i+1,open+1) || solve(s,i+1,open-1));
        }
    }
    bool checkValidString(string s) {
        return solve(s,0,0);
    }
};