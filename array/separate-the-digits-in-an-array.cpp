class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int>  ans;
        for(int i = 0; i<n; i++){
            int num = nums[i];
            vector<int> temp;
            while(num > 0){
                temp.push_back(num%10);
                num /= 10;
            }
            int m = temp.size();
            for(int j = m-1; j>=0; j--){
                ans.push_back(temp[j]);
            }
        }
        return ans;
    }
};