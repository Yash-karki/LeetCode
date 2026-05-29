class Solution {
public:
    bool doesAliceWin(string s) {
         for (char c : s) {
            char x = tolower(c);
            if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
                return true;
        }
        return false;  
    }
};