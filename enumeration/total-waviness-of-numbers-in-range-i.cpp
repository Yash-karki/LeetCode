class Solution {
public:
    int totalWaviness(int nums1, int nums2) {
        vector<int> vec;
        while(nums1 != 0){
            int a = nums1%10;
            nums1 = nums1/10;
            vec.push_back(a);
        }
        
    }
};