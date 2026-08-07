class Solution {
public:

    bool possible(vector<int> &arr, int day, int m, int k){
        int cnt = 0;
        int bouq = 0;
        int n = arr.size();
        for(int i = 0; i<n; i++){
            if(arr[i] <= day){
                cnt++;
            }else{
                bouq += cnt/k;
                cnt = 0;
            }
        }
        bouq += cnt/k;
        if(bouq >= m){
            return true;
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int res = -1;
        long long total = 1LL * k * m;
        if(n < total) return res;

        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i = 0; i<n; i++){
            if(bloomDay[i]<mini ){
                mini = bloomDay[i];
            }
            if(bloomDay[i] > maxi){
                maxi = bloomDay[i];
            }
        }
        while(mini <=maxi){
            int mid = mini + (maxi-mini)/2;
            if(possible(bloomDay,mid,m,k)){
                res = mid;
                maxi = mid - 1;
            }else{
                mini = mid + 1;
            }
        }
        return res;
    }
};