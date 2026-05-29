class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        int pos1 = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] == 1){
                pos1 = i;
                break;
            }
        }
        for(int i = pos1+1; i<n; i++){
            if(nums[i] == 1){
                if(pos1 != -1){
                    if((i-pos1)-1 < k){
                        return false;
                    }
                }
                pos1 = i;
            }
        }
        return true;
    }
};