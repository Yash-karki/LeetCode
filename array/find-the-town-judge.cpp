class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> arr1(n+1, 0);
        vector<int> arr2(n+1, 0);

        for(auto &it : trust){
            int a = it[0];
            int b = it[1];
            arr1[a]++;
            arr2[b]++;
        }
        for(int i = 1; i<=n; i++){
            if (arr1[i] == 0 && arr2[i] == n-1) {
                return i;
            }
        }
    return -1;        
    }
};