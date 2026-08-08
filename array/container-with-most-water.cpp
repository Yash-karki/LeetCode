class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        
        int ans = INT_MIN;
        int low = 0;
        int high = n - 1;
        while(low < high) {
            int ht = min(height[low], height[high]);
            int len = high-low;
            ans = max(ans,ht*len);
            if(height[low] < height[high]){
                low++;
            }else{
                high--;
            }
        }
        return ans;
    }
};

