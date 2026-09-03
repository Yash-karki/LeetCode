class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int n = nums.size();
        int mini = *min_element(nums.begin(),nums.end());
        if(mini%2 == 1){
            return true;
        }
        for(int i = 0;i<n; i++){
            if(nums[i]%2 == 1){
                return false;                
            }
        }
        return true;
    }
};