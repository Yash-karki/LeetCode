class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0;
        int j = 0;
        int ans = INT_MIN; 
        while(i<n1 && j<n2){
            if(i>j){
                j++;
            }
            else if(nums1[i]<=nums2[j]){
                int diff = j-i;
                ans = max(ans,diff);
                j++;
            }else{
                i++;
            }
        }
        if(ans == INT_MIN){
            return 0;
        }
        return ans;
    }
};