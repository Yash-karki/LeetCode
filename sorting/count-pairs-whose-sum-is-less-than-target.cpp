class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int low = 0;
        int high = nums.size()-1;
        int count = 0;
        while(low < high){
            int s = nums[low] + nums[high];
            if(s < target){
                count += (high-low);
                low++;
            }else{
                high--;
            }
        }
        return count;
    }
};