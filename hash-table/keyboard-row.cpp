class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result;
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

        for (string word : words) {
            string lowerWord = "";
            
            for (char c : word) {
                lowerWord += tolower(c);
            }

            string currentRow;
            
            if (row1.find(lowerWord[0]) != string::npos)
                currentRow = row1;
            else if (row2.find(lowerWord[0]) != string::npos)
                currentRow = row2;
            else
                currentRow = row3;

            bool valid = true;

            for (char c : lowerWord) {
                if (currentRow.find(c) == string::npos) {
                    valid = false;
                    break;
                }
            }

            if (valid)
                result.push_back(word);
        }

        return result;
    }
};