class Solution {
public:
    string sortVowels(string s) {
         string vowels;
        string result = s;
        auto isVowel = [](char c) {
            return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
        };
        for(char c : s) {
            if(isVowel(c)) vowels.push_back(c);
        }
        sort(vowels.begin(), vowels.end());
        int idx = 0;
        for(int i=0; i<s.size(); i++) {
            if(isVowel(s[i])) {
                result[i] = vowels[idx++];
            }
        }
        
        return result;
        
    }
};