class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        int n = prices.size();
        int m = discounts.size();
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        int i = n-1;
        int j = m-1;
        double ans = 0;
        while(i >= 0 && j >= 0){
            ans += prices[i]*((double)(100-discounts[j])/100);
            i--;
            j--;
        }
        for(int k = i; k>=0; k--){
            ans+= prices[k];
        }
        return ans;
    }
};