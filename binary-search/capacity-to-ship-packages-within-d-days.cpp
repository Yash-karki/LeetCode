class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = 0;
        int n = weights.size();
        for(int i = 0; i<n; i++){ // maxCapacity
            high+=weights[i];
        }
        while(low<=high){ // capacity
            int currWt = 0; 
            int daysreq = 1;
            int mid = low+(high-low)/2;
            for(int j = 0; j<n; j++){

                if(currWt + weights[j] > mid){
                    daysreq++;
                    currWt = 0;
                }
                currWt += weights[j];
            }
            if(daysreq <= days){
               high = mid-1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};