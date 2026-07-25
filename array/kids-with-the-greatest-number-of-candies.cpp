class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxCandy = INT_MIN;
        int n = candies.size();
        for(int i = 0; i<n; i++){
            if(candies[i] > maxCandy){
                maxCandy = candies[i];
            }
        }
        for(int i = 0; i<n; i++){
            if(candies[i] + extraCandies >= maxCandy){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};