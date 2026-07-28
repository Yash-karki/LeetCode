class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        if(n==1) return s;
        sort(s.begin(),s.begin()+((n/2)));
        int i = n/2 -1;
        int j = 0;
        if(n%2 == 0){
             j = n/2;
        }else{
             j = n/2 + 1;
        }
        while(i>=0){
            s[j] = s[i];
            j++;
            i--;
        }
        return s;
    }
};