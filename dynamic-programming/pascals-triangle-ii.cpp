class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long ans = 1;
        vector<int> vec;
        vec.push_back(1);
        for(int i = 1; i<=rowIndex; i++){
            ans = ans*(rowIndex-i+1)/i;
            vec.push_back((int)ans);
        }   
        return vec;
    }
};