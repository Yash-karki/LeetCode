class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();
        vector<int> divisor;
        int div = 0, sum = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 1; j <= nums[i]; j++) {
                if(nums[i] % j == 0) {
                    divisor.push_back(j);
                    div++;
                }
                if(div > 4) break;
            }

            if(div == 4) {
                for(int k = 0; k < 4; k++) {
                    sum += divisor[k];
                }
            }

            divisor.clear();
            div = 0;
        }
        return sum;
    }
};
