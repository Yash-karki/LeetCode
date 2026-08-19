class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = *max_element(nums.begin(), nums.end());
        int n = nums.size();
        int low = 1;
        while(low<=maxi){
            int mid = low+(maxi-low)/2;
            long long sum = 0;
            for (int j = 0; j < n; j++) {
                sum += ceil((double)nums[j]/mid);
            }
            if(sum<=threshold){
                maxi = mid - 1;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};