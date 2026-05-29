class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n1 = nums1.size();
        int n2 = nums2.size();

        for (int j = 0; j < n1; j++) {
            int greater = -1;
            bool found = false;

            for (int i = 0; i < n2; i++) {
                if (nums2[i] == nums1[j]) {
                    found = true;  
                }
                else if (found && nums2[i] > nums1[j]) {
                    greater = nums2[i];
                    break;        
                }
            }
            ans.push_back(greater);
        }
        return ans;
    }
};
