class Solution {
public:
    int mySqrt(int x) {
        if(x<2){
            return x;
        }
        int low = 1;
        int high = x/2;
        int ans = 0;
        while(low<=high){
            long long mid = low + (high-low)/2;
            long long square = mid*mid;

            if(square == x){
                ans = mid;
                return ans;
            }else if(square > x){
                high = mid-1;
            }else{
                ans = mid;
                low = mid+1;
            }
        }
        return ans;
    }
};