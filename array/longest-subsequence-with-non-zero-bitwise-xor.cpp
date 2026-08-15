class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int totalXOR = 0; // sare xor caluclate
        bool flag = false; // isme dekhenge ki zero h ya non zero
        int n = nums.size();
        for (int num : nums) {
            totalXOR ^= num; // totalXOR = totalXOr ^ num
            if (num != 0){
                flag = true;
            }
        }

        if (!flag) return 0;      
        if (totalXOR != 0) return n; 
        return n-1;  
    }
};
