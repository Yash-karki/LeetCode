class Solution {
public:

    bool solve(vector<int> &weights,int mid,  int days){
        int currWt = 0; 
        int daysreq = 1;
        int n = weights.size();
        for(int i = 0; i<n; i++){
            if(currWt+weights[i]>mid){
                daysreq++;
                currWt = 0;
            }
            currWt += weights[i];
        }
        return daysreq<=days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = 0;
        int n = weights.size();

        for(int i = 0; i<n; i++){ // maxCapacity
            high+=weights[i];
        }
        while(low<=high){ // capacity
            
            int mid = low+(high-low)/2;
            if(solve(weights,mid,days)){
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};