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
        if(n < k*m ) return -1;
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
        for(int i = mini; i<= maxi; i++){
            if(possible(bloomDay,i,m,k)){
                return i;
            }
        }
        return -1;
    }
};