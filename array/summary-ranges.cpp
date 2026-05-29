class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int i = 0;
        int n = nums.size();
        while(i < n){
            int a = nums[i];
            while((i+1 < n) && nums[i+1] == nums[i] + 1){
                i++;
            }
            int b = nums[i];

            if(a == b){
                result.push_back(to_string(a));
            }
            else{
                result.push_back(to_string(a) + "->" + to_string(b));
            }
            i++;
        }
        return result;
    }
};