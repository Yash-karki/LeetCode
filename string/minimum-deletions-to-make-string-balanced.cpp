class Solution {
public:
    int minimumDeletions(string s) {
        int bCount = 0;   
        int mindel = 0;      

        for (char c : s) {

            if (c == 'b') {
                bCount++;      
            } 
            else { 
                mindel = min(mindel + 1, bCount);
            }
        }
        return mindel;
    }
};