class Solution {
public:
    bool buddyStrings(string s, string goal) {

        
    if (s.length() != goal.length()) return false;


    if (s == goal) {
        unordered_set<char> seen;
        for (char c : s) {
            if (seen.count(c)) return true; 
            seen.insert(c);
        }
        return false; 
    }

    vector<int> diffIndices;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != goal[i]) diffIndices.push_back(i);
    }

    if (diffIndices.size() != 2) return false;

    int i = diffIndices[0];
    int j = diffIndices[1];


    return (s[i] == goal[j] && s[j] == goal[i]);
    }
};