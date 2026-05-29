class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        sort(nums1.begin(), nums1.end());
        int m = nums1[0];
        int target = m % 2;

        for (int i = 0; i < n; i++) {
            int x = nums1[i];

            if (x % 2 == target)
                continue;

            bool possible = false;

            for (int j = 0; j < i; j++) {
                int y = nums1[j];

                if ((x - y) >= 1 && ((x - y) % 2 == target)) {
                    possible = true;
                    break;
                }
            }

            if (!possible)
                return false;
        }

        return true;
    }
};