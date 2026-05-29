class Solution {
public:
    long long minimumCost(vector<int>& nums, int k, int dist) {
        int n = nums.size();

        if (k == 1) return nums[0];
        if (n < k) return -1;

        multiset<int> small, large;
        long long sumSmall = 0;
        long long ans = LLONG_MAX;

        auto rebalance = [&]() {
            while ((int)small.size() > k - 1) {
                auto it = prev(small.end());
                sumSmall -= *it;
                large.insert(*it);
                small.erase(it);
            }
            while ((int)small.size() < k - 1 && !large.empty()) {
                auto it = large.begin();
                sumSmall += *it;
                small.insert(*it);
                large.erase(it);
            }
        };

        for (int i = 1; i < n; i++) {
            // add nums[i]
            if (small.empty() || nums[i] <= *prev(small.end())) {
                small.insert(nums[i]);
                sumSmall += nums[i];
            } else {
                large.insert(nums[i]);
            }

            rebalance();

            // remove element that leaves the window
            if (i > dist + 1) {
                int out = nums[i - (dist + 1)];
                auto it = small.find(out);
                if (it != small.end()) {
                    sumSmall -= *it;
                    small.erase(it);
                } else {
                    large.erase(large.find(out));
                }
                rebalance();
            }

            if ((int)small.size() == k - 1) {
                ans = min(ans, sumSmall + nums[0]);
            }
        }

        return ans;
    }
};
