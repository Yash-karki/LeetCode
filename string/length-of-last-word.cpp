class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = s.size();
        int count = 0;
        for(int i = l-1; i>=0; i--){
            if(s[i] == ' ' && count == 0){
                continue;
            }
            else if(s[i] != ' '){
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};