class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Use 9 sets for rows, cols, and boxes
        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool boxes[9][9] = {false};

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                char ch = board[r][c];
                if (ch == '.') continue; // skip empty cells

                int num = ch - '1'; // map '1'->0 ... '9'->8
                int boxIndex = (r / 3) * 3 + (c / 3);

                if (rows[r][num] || cols[c][num] || boxes[boxIndex][num])
                    return false; // duplicate found

                rows[r][num] = cols[c][num] = boxes[boxIndex][num] = true;
            }
        }
        return true;
    }
};