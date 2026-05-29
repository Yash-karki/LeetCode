class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        for(int i = 0; i<n; i++){
            if(nums[i]>0){
                int j = i;
                j = (j+nums[i])%n;
                result.push_back(nums[j]);
            }
            else if(nums[i]<0){
                int j = i;
                j = (j+nums[i])%n;
                if(j<0){
                    j+=n;
                }
                result.push_back(nums[j]);
            }else if(nums[i] == 0){
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};