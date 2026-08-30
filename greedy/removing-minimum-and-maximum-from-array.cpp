class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        auto mini = min_element(nums.begin(),nums.end());
        auto maxi = max_element(nums.begin(),nums.end());
        int minIdx = mini - nums.begin();
        int maxIdx = maxi - nums.begin();
        int left = min(minIdx,maxIdx);
        int right = max(minIdx,maxIdx);
        int front = right+1;
        int back = n-left;

        int both = (left+1)+(n-right);
        return min({front,back,both});
    }
};