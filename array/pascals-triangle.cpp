class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i<=numRows; i++){
            vector<int> row;
            int num = 1;
            row.push_back(1);
            for(int j = 1; j<i; j++){
                num = num*(i-j);
                num = num/j;
            
                row.push_back(num);
            }
            ans.push_back(row);
        }
        return ans;
        
    }
};