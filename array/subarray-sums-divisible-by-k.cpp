class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> freq(k, 0);
        freq[0] = 1;

        int sum = 0, count = 0;

        for (int x : nums) {
            sum += x;
            int rem = sum % k;
            if (rem < 0){
                rem += k;
            }

            count += freq[rem];
            freq[rem]++;
        }

        return count;
    }
};