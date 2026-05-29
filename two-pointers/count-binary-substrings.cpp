class Solution {
public:
    int countBinarySubstrings(string s) {
        int count = 1;
        int n = s.size();
        vector<int> arr;
        for(int i = 0; i<n-1; i++){
            if(s[i] == s[i+1]){
                count++;
            }
            else{
                arr.push_back(count);
                count = 1;
            }
        }
        arr.push_back(count);
        int ans = 0;
        for(int i = 0; i<arr.size()-1;i++){
            ans += min(arr[i],arr[i+1]);
        }
        return ans;
    }
};