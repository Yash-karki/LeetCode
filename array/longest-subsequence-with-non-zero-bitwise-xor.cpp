class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int totalXOR = 0;
        bool hasNonZero = false;

        for (int num : nums) {
            totalXOR ^= num;
            if (num != 0) hasNonZero = true;
        }

        if (!hasNonZero) return 0;      
        if (totalXOR != 0) return nums.size(); 
        return nums.size() - 1;  
    }
};
