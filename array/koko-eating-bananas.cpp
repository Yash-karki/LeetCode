class Solution {
public:
    int maxi(vector<int>& piles) {
        int n = piles.size();
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (piles[i] > maxi) {
                maxi = piles[i];
            }
        }
        return maxi;
    }

    long long ispossible(vector<int>& piles, int mid) {
        long long hour = 0;
        for (int i : piles){
            hour += (i+mid-1)/mid;
        }
        return hour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = maxi(piles);
        int ans = high;
        while (low <= high) {
            int mid = low+(high-low)/2;

            if (ispossible(piles, mid) <= h) {
                ans = mid;
                high = mid -1;
            } else
                low = mid+ 1;
        }
        return ans;
    }
};