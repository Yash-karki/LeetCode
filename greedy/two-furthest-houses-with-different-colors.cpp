class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i = 0;
        int j = colors.size()-1;
        int ans1 = INT_MIN;
        int ans2 = INT_MIN;
        while(0!=j){
            if(colors[0] != colors[j]){
                ans1 = max(ans1,abs(0-j)); 
            }
            j--;
        }
        int n = colors.size()-1;
        while(i!=n){
            if(colors[i] != colors[n]){
                ans2 = max(ans2,abs(i-n));
            }
            i++;
        }
        return max(ans1,ans2);
    }
};