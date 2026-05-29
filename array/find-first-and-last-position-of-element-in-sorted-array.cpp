class Solution {
public:
    int leftSearch(vector<int>& nums, int mid) {
        int idx = mid;
        for (int i = mid; i >= 0; i--) {
            if (nums[i] == nums[mid]) idx = i;
            else break;
        }
        return idx;
    }

    int rightSearch(vector<int>& nums, int mid) {
        int idx = mid;
        for (int i = mid; i < nums.size(); i++) {
            if (nums[i] == nums[mid]) idx = i;
            else break;
        }
        return idx;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> sol = {-1, -1};

        if (n == 1) {
            if (nums[0] == target) return {0, 0};
            return sol;
        }

        int l = 0, h = n - 1;

        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (nums[mid] == target) {
                sol[0] = leftSearch(nums, mid);
                sol[1] = rightSearch(nums, mid);
                break;
            }
            else if (nums[mid] > target) {
                h = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        return sol;
    }
};
