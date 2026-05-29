class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] == 1){
                cnt1++;
            }
            else{
                cnt2 = max(cnt1,cnt2);
                cnt1 = 0;
                
            }
            
        }
        cnt2 = max(cnt1,cnt2);
        return cnt2;
    }
};