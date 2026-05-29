class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size() - 1;
        sort(nums.begin(),nums.end());
        int max3 = nums[n];
        int cnt = 1;
        for(int i = n;i>0;i--){
            if(nums[i]!=nums[i-1]){
                cnt++;
            }
            if(cnt == 3){
                max3 = nums[i-1];
            }
        }
        return max3;
    }
};