class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int word = 0;
        bool valid = true;

        for (int i = 0; i <= text.size(); i++) { 
            if (i == text.size() || text[i] == ' ') {
                if (valid) word++;
                valid = true; 
            } 
            else {
                for (int j = 0; j < brokenLetters.size(); j++) {
                    if (text[i] == brokenLetters[j]) {
                        valid = false;
                        break;
                    }
                }
            }
        }
        return word;
    }
};
