class Solution {
public:

    int solve(int i , int j , vector<int> &nums){
        if(nums[i] == nums[j]){
            return nums[i];
        }
        int left = nums[i] - sole(i+1, j, nums);
        int right = nums[j] - solve(i, j-1, nums);

        return max(lefft, right);
    }
    bool predictTheWinner(vector<int>& nums) {
        if(solve(0,n, nums) >= 0){
            return true;
        }
        return false; 
    }
};