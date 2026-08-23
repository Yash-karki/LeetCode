class Solution {
public:
    string largestOddNumber(string nums) {
        int n = nums.size();
        for(int i = n-1; i>=0; i--){
            string word = "";
            if((nums[i] - '0') % 2 != 0){
                for(int j = 0; j<=i; j++){
                    word+=nums[j];
                }
                return word;
            }
        }
        return "";
    }
};