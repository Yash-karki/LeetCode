class Solution {
public:
    string interpret(string cmd) {
        string ans;
        for(int i =0; i<cmd.size(); i++){
            if(cmd[i] == 'G'){
                ans.push_back('G');
            }else if(cmd[i] == '(' && cmd[i+1] == ')'){
                ans.push_back('o');
            }else if(cmd[i] == '(' && cmd[i+1] == 'a' && cmd[i+2] == 'l' && cmd[i+3] == ')'){
                ans.push_back('a');
                ans.push_back('l');

            }
        }
        return ans;
    }
};