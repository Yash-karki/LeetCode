class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n = nums.size();
        int cnt = 0;
        for(int i = 0; i<n; i++){
            int dig = nums[i];
            while(dig != 0){
                int num = dig%10;
                dig = dig/10;
                if(num == digit){
                    cnt ++;
                }
            }
        }
        return cnt;
    }
};