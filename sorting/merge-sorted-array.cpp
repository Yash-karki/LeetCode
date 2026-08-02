class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // for (int i = 0;i<n;i++){
        //     nums1[m+i] = nums2[i];
        // }
        // sort(nums1.begin(),nums1.end());

        int i = m-1; //ye nums1 ki last value pe point karega
        int j = n-1; // nums2 ke last me point

        int k = m+n-1;//nums1 ke last me merge krne ke liye

        while( j >= 0){
            if(i >= 0 && nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                k--;
                i--;
            }else{
                nums1[k] = nums2[j];
                k--;
                j--;
            }
        }

    }
};